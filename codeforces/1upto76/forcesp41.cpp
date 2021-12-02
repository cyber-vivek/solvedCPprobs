#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=1;i<n;i++)
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
    int n;
    cin>>n;
    vi v(n);
    queue<int> q;
    for(auto &x: v)cin>>x;
    sort(all(v));
    int i;
    cout<<v[0]<<" ";
    fo(i,n){
        if(v[i]==v[i-1])q.push(v[i]);
        else cout<<v[i]<<" ";
    }
    while (q.empty()!=true){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
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