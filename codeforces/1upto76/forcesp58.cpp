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
    int n;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    sort(all(v));
    int mid=n/2;
    if(n%2!=0){
        cout<<v[n/2]<<" ";
        for(int i=1;i<=n/2;i++){
            cout<<v[mid-i]<<" "<<v[mid+i]<<" ";
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            cout<<v[mid+i]<<" "<<v[mid-i-1]<<" ";
        }
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