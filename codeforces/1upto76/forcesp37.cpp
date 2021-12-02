#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef pair<ll int,ll int>	pii;
typedef vector<ll int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;

void solve() {
    //code starts here
    ll int n;
    cin>>n;
    vpii v(n);
    for(auto &x:v){
        cin>>x.first;
        cin>>x.second;
    }
    vi t(n);
    for(auto &x:t) cin>>x;
    ll d=0;
    ll int i=0;
    for(;i<n-1;i++){
        d=v[i].first+t[i]+ceil((v[i].second-v[i].first)/2.0)+d-v[i].second;
        if(d<0)d=0;
    }
    cout<<(v[i].first+t[i]+d)<<endl;
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