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
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    vi v (n*n);
    int k=1;
    for (int i=0;i<n*n;i+=2){
        v[i]=k;
        k++;
    }
    for (int i=1;i<n*n;i+=2){
        v[i]=k;
        k++;
    }
    int c=0;
    for (int i=0;i<n*n;i++){
    cout<<v[i]<<" ";
    c++;
    if(c==n){
        cout<<endl;
        c=0;
    }
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