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
    int n,k;
    cin>>n>>k;
    vector<int> b(n), ans(n,0);
    map<int,vector<int>> m;
    for(int i =0;i<n;i++){
        cin>>b[i];
        m[b[i]].push_back(i);
    }
    int color = 1;
    int enumber = 0;
    int sum = 0;

    for(auto x:m){
        if(x.second.size()>=k)continue;
        else sum+=x.second.size();
    }
    enumber+=sum/k;
    for(auto x : m){

        if(x.second.size()>=k){
            int tc =1;
            for(auto x:x.second){
                ans[x] = tc;
                tc++;
                if(tc>k)break;
            }
        }

        else{
            if(enumber>0){
        for(auto x:x.second){
            ans[x] = color;
            color++;
            if(color>k){
                color = 1;
                enumber--;
                if(enumber<=0){
                break;
                }
            }
        }}
    }
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;

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