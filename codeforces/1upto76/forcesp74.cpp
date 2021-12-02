#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
// #define lbr(v) for(int x:v)
typedef pair<int, int>	pii;
typedef vector<ll int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
struct s{
   ll int i,j,k,l;
};
void solve() {
    //code starts here
    int n,min=INT_MAX,in=-1;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<min){
            in=i;
            min=v[i];
        }
    }
    vector<s> ans;
    s a;
    for(int jl=in+1;jl<n;jl+=2){

        // ll a,b,c,d;
        a.i=in+1;
        a.j=jl+1;
        a.k=min;
        a.l=1000000007;
        ans.push_back(a);
    }
    for(int jl=in-1;jl>=0;jl-=2){
        a.i=jl+1;
        a.j=in+1;
        a.k=1000000007;
        a.l=min;
        ans.push_back(a);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x.i<<" "<<x.j<<" "<<x.k<<" "<<x.l<<endl;
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