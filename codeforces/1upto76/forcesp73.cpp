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
   ll int a,b;
    cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        return;
    }
    if(b==2){
         cout<<"YES"<<endl;
    cout<<a<<" "<<a*(2*b-1)<<" "<<a*2*b<<endl;
    return;
    }
    cout<<"YES"<<endl;
    cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;

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