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

void solve() {
    //code starts here
    int n;
    cin>>n;
    vi v(n);
    for(int &x:v) cin>>x;
    sort(all(v));
    ll a1=1LL*v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
    ll a2=1LL*v[n-1]*v[n-2]*v[n-3]*v[1]*v[0];
    ll a3=1LL*v[n-1]*v[3]*v[2]*v[1]*v[0];
    ll a4=1LL*v[4]*v[3]*v[2]*v[1]*v[0];
    cout<<max(max(a1,a2),max(a3,a4))<<endl;
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