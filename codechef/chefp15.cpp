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

bool cmp(pair<char,int> p,pair<char,int> q){
    return p.second<q.second;
}
void solve() {
    //code starts here
    int n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    int max;
    max=(e>=h)?(h+(e-h)/2):(e+(h-e)/2);
    if(max<n){
        cout<<-1<<endl;
        return;
    }
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