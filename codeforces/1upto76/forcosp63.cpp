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
    int n,i,m=1e9+7;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    int min= *min_element(all(v)),cnt=0;
    fo(i,n){
        if(v[i]==min){ cnt++; continue;}
        if((v[i]&min)!=min){
            // Beware of operator precedence
            cout<<0<<endl;
            return;
        }
    }
    ll ans=1;
    for(int i=1;i<n-1;i++)ans=(ans*i)%m;
    ans=(((ans*cnt)%m)*(cnt-1))%m;
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