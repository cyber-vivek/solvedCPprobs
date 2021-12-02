#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
// #define lbr(v) for(int x:v)
typedef pair<int, int>	pii;
typedef vector<ll>		vi;
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
    ll n,k,s;
    cin>>n>>k>>s;
    vi a(n);
    cin>>a[0];
    for(int i =1;i<n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    vi dp(n+1),ans(n+1);
    dp[0] = upper_bound(all(a),s)-a.begin();
    for(int i =1;i<n+1;i++){
        dp[i] = upper_bound(all(a),a[i-1]+s)-a.begin();
        ans[i] = i;
    }
    long long x = 1;
    for(int i =0;i<21;i++){
        if(k&x){
            for(int i =0;i<n;i++)
            ans[i] = dp[ans[i]];
        }
        x=x<<1;
        for(int i =0;i<n;i++){
            dp[i] = dp[dp[i]];
        }
    }
    ll maxs =LONG_LONG_MIN;
    for(int i =0;i<n;i++){
        // deb(ans[i]);
        // deb(k);
        maxs = max((ans[i]-i),maxs);
    }
    cout<<maxs<<endl;

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