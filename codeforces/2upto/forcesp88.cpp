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
    int n;
    cin>>n;
    vi v(n);
    int ans1=0,ans2=0;
    for(int &x:v)cin>>x;
    vi a (v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]==1){
            for(int j=1;j<n;j++){
                if(i-j>-1){
                    if(v[i-j]==0){
                        v[i-j]=5;
                        ans1+=j;
                        break;
                    }
                }
                if(i+j<n){
                    if(v[i+j]==0){
                        v[i+j]=5;
                        ans1+=j;
                        break;

                    }
                }


            }
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            for(int j=1;j<n;j++){
                if(i-j>-1){
                    if(a[i-j]==0){
                        a[i-j]=5;
                        ans2+=j;
                        break;
                    }
                }
                if(i+j<n){
                    if(a[i+j]==0){
                        a[i+j]=5;
                        ans2+=j;
                        break;

                    }
                }


            }
        }
    }
    cout<<min(ans1,ans2)<<endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}