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
   ll int c;
    cin>>c;
   ll int d=int(log2(c))+1;
   ll int u= pow(2,d)-1;
    // deb(d);
    // deb(u);
    u=u^(1<<(d-1));
   ll int l=0;
    l=l^(1<<(d-1));
    // deb(l);
    for (ll int i =d-2;i>=0;i--){
        if(!(c&(1<<i))){
            l=l|(1<<i);
        }
    }
    // deb2(l,u);
    cout<<l*u<<endl;

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