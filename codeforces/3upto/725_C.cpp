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
ll countPair(vector<ll> arr, ll size, ll a, ll b) {
    ll cnt = 0;
    ll i = 0, low = size-1, high = size- 1;
    while (i < high) {
         low = max(i, low);
         while (low > i && arr[i] + arr[low] >= a) --low;
        while (high > low && arr[i] + arr[high] > b) --high; 
        cnt += (high-low);
        ++i;
    }
    return cnt;
}

void solve() {
    //code starts here
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for(ll &x:v)cin>>x;
    sort(all(v));
    ll ans = countPair(v,n,l,r);
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