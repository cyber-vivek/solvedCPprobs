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
    int n,m;
    cin>>n>>m;
    vi v(n),c(m);
    int sv=0,sc=0;
    for(auto &x:v) {cin>>x; sv+=x;}
    for(auto &x:c) {cin>>x; sc+=x;}
    if(sv>sc){
        cout<<"0"<<endl;
        return;
    }
    sort(all(v));
    sort(all(c));
    int s=0;
    for(int i=0;i<n;i++){
        sv=sv-v[i]+c[m-i-1];
        sc=sc-c[m-i-1]+v[i];
        s++;
        if(sv>sc){
            cout<<s<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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