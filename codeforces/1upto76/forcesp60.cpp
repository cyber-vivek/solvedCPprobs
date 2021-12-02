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
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(int &x:v)cin>>x;
    int i =0;
while(k!=0&&i<n-1){
    if(k>v[i]){
        k=k-v[i];
        v[n-1]+=v[i];
        v[i]=0;
        i++;
    }
    else{
        v[i]=v[i]-k;
        v[n-1]+=k;
        k=0;
    }
}
  for(int x:v)cout<<x<<" ";
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