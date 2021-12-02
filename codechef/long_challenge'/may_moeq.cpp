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
int m = 5e5+5;
 vector<vector<int>> v(m);
 void div(){
    for(int i = 1;i<=m;i++){
        for(int j =i;j<=m;j+=i){
            v[j].push_back(i);
        }
    }
 }
void solve() {
    //code starts here
    int n,m;
    cin>>n>>m;
    ll ans = 0;
    for(int b = 2;b<=n;b++){
        if(b>m){
            ans+=b-1;
            continue;
        }
        int x = m -m%b;
        ans+=(lower_bound(v[x].begin(),v[x].end(),b)-v[x].begin());

    }
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    div();
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}