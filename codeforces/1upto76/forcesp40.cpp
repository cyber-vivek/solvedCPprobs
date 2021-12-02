
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=1;i<=n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
ll gcd(ll a,ll b){
    if (a%b==0) return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}
void solve() {
    //code starts here
    ll int n,m;
    ll k;
    cin>>n>>m>>k;
    vi a(n),b(m);
    for(int &x:a) cin>>x;
    for(int &x:b) cin>>x;
    ll g=lcm(m,n),i;
    // deb(g);
    vector<ll> d;
    d.reserve(g);
    fo(i,g){
        if(a[((i-1)%n)]!=b[((i-1)%m)]){
            d.push_back(i);
        }
        if(d.size()==k){
            cout<<i<<endl;
            return;
        }
    }
    // deb(d.size());
    // deb((k/d.size())*g);
    if(k%d.size()==0)
    cout<<(k/d.size())*g<<endl;
    else
    cout<<((k/d.size())*g)+d[(k%d.size())-1]<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    // int t = 1;
    // cin >> t;
    // while(t--) {
      solve();
    // }
    return 0;
}