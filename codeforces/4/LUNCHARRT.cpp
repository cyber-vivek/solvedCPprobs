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
ll powermod(ll x,ll y,ll m){
    if(y==0){
        return 1;
    }
    ll r= powermod(x,y/2,m);
    if(y&1){
        return (r*r*x)%m;
    }
    return (r*r)%m;
}
void solve() {
    //code starts here
    int n,min = INT_MAX;
    cin>>n;
    vi a(n),b(n);
    for(int &x:a)cin>>x;
    for(int &x:b){
        cin>>x;
        if(min>((a[0]+x)%n)) min = ((a[0]+x)%n);
    }
    int v[2] ={0,0};
    int pos = 0;
    for(int i =0;i<n;i++){
        if((a[0]+b[i])%n==min){v[pos] = i; pos++;}
    }
    int i1 = v[0],i2 = v[1];
    vector<int> ans[2];
    // cout<<i1<<" "<<i2<<endl;
    for(int i =0;i<n;i++){
        ans[0].push_back((a[i]+b[i1])%n);
        ans[1].push_back((a[i]+b[i2])%n);
        i1++;
        i2++;
        if(i1==n)i1 =0;
        if(i2==n)i2 = 0;
    }
    int num = 0;
    for(int i =0;i<n;i++){
        if(ans[0][i]==ans[1][i]) continue;
        if(ans[0][i]<ans[1][i]) break;
        if(ans[0][i]>ans[1][i]){ num++;break;}
    }
    for(int x:ans[num]){
        cout<<x<<" ";
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