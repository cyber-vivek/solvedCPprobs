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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    vector<ll> b;
    for(int  i =1;i<n;i++){
        if(v[i]-v[i-1]<=x){
        }
        else{
            if((v[i]-v[i-1])%x==0){
                b.push_back((v[i]-v[i-1])/x-1);
            }
            else{
                b.push_back((v[i]-v[i-1])/x);
            }
        }
    }
    if(b.size()==0){
        cout<<1<<endl;
        return;
    }
    ll sum = 0;
    sort(all(b));
    for(int i = 0;i<b.size();i++){
        if(sum>=k){
            if(sum==k){
                cout<<b.size()-i+1;
                return;
            }
            cout<<b.size()-i+2;
            return;
        }
        sum+=b[i];
    }
    if(sum>k){
        cout<<2;
    }
    else{
        cout<<1;
    }


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}