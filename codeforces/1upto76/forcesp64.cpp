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
    int n,x;
    cin>>n;
    vi v(n);
    vi a;
    bool k[2*n+1];
    memset(k,0,2*n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        k[v[i]]=1;
    }
    int i;
    for(int x:v){
        for(i=x+1;i<2*n+1;i++){
            if(k[i]==0){
                a.push_back(x);
                a.push_back(i);
                k[i]=1;
                break;
            }
        }
        if(i==(2*n+1)){
            cout<<-1<<endl;
            return;
        }
    }
    for(int x:a)cout<<x<<" ";
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