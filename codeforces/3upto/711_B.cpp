#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
// #define lbr(v) for(int x:v)
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
ll powermod(ll x,ll y,ll m){
    if(y==0){
        return 1;
    }
    ll r= powermod(x,y/2,m);
    if(y&1){
        return (r*r*x)%m;
    }
    return (r*r)%m;
}
void solve() {
    //code starts here
    int n,w,x;
    cin>>n>>w;
    map<int,int,greater<int>> m;
    for(int i = 0;i<n;i++){
        cin>>x;
        m[x]+=1;
    }
    // cout<<m.size();
    // for(auto x:m){
    //     x.second--;
    //     cout<<x.first<<x.second<<endl;
    // }
    int f = 0,r = 0;
    bool c = false;
    while(c ==false){
        // cout<<1<<endl;
    for(auto &x:m){
        // deb(x.first);
        // deb(x.second);
        while(((x.first+f)<=w)&&(x.second>0)){
            f+=x.first;
            x.second--;
            c = true;
        }
    }
    if(c==false){
        break;
    }
    r++;
    c=false;
    f = 0;
    }
    cout<<r<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}