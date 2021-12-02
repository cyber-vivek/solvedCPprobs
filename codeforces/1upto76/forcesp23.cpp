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
    int k,n;
    cin>>n>>k;
    string s;
    cin>>s;
    if (k==0){
        cout<<"YES"<<endl;
        return;
    }
    // deb2(k,n);
    if(k>=ceil(n/2.0)){
        cout<<"NO"<<endl;
        return;
    }
    int i;
    for(i=0;i<=k-1;i++){
        if(s[i]==s[n-1-i]) continue;
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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