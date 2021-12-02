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
ll test = 1;
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
    ll a1,a2,a3;
    ll a4,a6;
    ll a7,a8,a9;
    cin>>a1>>a2>>a3>>a4>>a6>>a7>>a8>>a9;
    int ans = 0;
    if(a3-a2==a2-a1)ans++;
    if(a9-a8==a8-a7)ans++;
    if(a7-a4==a4-a1)ans++;
    if(a9-a6==a6-a3)ans++;
    map<ll ,ll> m;
    if(!(abs(a9-a1)&1)){
        m[min(a1,a9)+abs(a9-a1)/2]++;
    }
    if(!(abs(a8-a2)&1)){
        m[min(a2,a8)+abs(a8-a2)/2]++;
    }
    if(!(abs(a7-a3)&1)){
        m[min(a7,a3)+abs(a7-a3)/2]++;
    }
    if(!(abs(a4-a6)&1)){
        m[min(a4,a6)+abs(a4-a6)/2]++;
    }
    int max = INT_MIN;
    for(auto x:m){
        deb(x.first);
        if(x.second>max)max = x.second;
    }
    ans +=max;
cout<<"Case #"<<test<<": " <<ans<<endl;
test++;
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