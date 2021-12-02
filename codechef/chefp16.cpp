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
    int n,i;
    cin>>n;
    vi v(n);
    for(auto &x :v) cin>>x;
    sort(all(v));
    ll s=0;
    fo(i,n){
        if(i+1<v[i]){
            cout<<"Second"<<endl;
            return;
        }
        s+=i+1-v[i];
    }
    if(s%2==0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;

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