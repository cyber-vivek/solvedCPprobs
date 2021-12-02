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

void solve() {
    //code starts here
    int n,k1,k2,w,b,wt,bt;
    cin>>n>>k1>>k2>>w>>b;
    wt=min(k1,k2)+(abs(k1-k2))/2;
    bt=min(n-k1,n-k2)+(abs(k1-k2))/2;
    if(wt>=w&&bt>=b){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

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