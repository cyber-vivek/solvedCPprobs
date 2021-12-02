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
    int n,m;
    cin>>n>>m;
    vi i(n),c(m);
    for(int &x:i)cin>>x;
    for(int &x:c)cin>>x;
    sort(all(i));
    ll int a = 0,mincost = 0;
    for(int b = n-1;b>=0;b--){
        if(i[b]-1>=a){
            if(i[b]-1==a){

            }
            mincost+=c[a];
            a++;
        }
        else{
            mincost+=c[i[b]-1];
        }
    }
    cout<<mincost<<endl;

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