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
    vi a(100000);
    // cout<<a[100];
    for(int i=0;i<n;i++){
        if(v[i]-i>=0)
        a[v[i]-i]+=1;
    }
    sort(all(a),greater<int>());
    int ans=0;
    for(int i=0;i<100000;i++){
        if(a[i]<2){
            break;
        }
        ans+= (a[i]*(a[i]-1))/2;
    }
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