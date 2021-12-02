#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;

ll solve() {
    //code starts here
    ll p,a[3],min =LLONG_MAX;
    cin>>p>>a[0]>>a[1]>>a[2];
    for (auto x:a){
        if(p%x==0) return 0;
        if(min>abs(((p/x+1)*x)-p)) min=abs(((p/x+1)*x)-p);
    }
    return min;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    ll ans;
    cin >> t;
    while(t--) {
     ans= solve();
     cout<<ans<<endl;
    }

    return 0;
}