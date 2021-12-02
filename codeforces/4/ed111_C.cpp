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
    int n;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    ll ans = n+n-1;
    // deb(ans);
    for(int i =0;i<n-3;i++){
        int a,b,c,d;
        a = v[i];
        b = v[i+1];
        c = v[i+2];
        d = v[i+3];
        if((c>=b&&b>=a)||a>=b&&b>=c){
            continue;
        }
        ans++;
        if((a>=b&&b>=d)||(a<=b&&b<=d))continue;
        if((a>=c&&c>=d)||(a<=c&&c<=d))continue;
        if((b>=c&&c>=d)||(b<=c&&c<=d))continue;
        ans++;
        // deb(i);
        // deb(ans);
    }
    if(n>=3){
    int a = v[n-3], b = v[n-2],c = v[n-1];
    bool exist = false;
    if((a>=b&&b>=c)||(a<=b&&b<=c)) exist = true;
    else{
        ans++;
    }}
    cout<<ans<<endl;

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