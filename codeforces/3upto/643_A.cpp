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
    ll a,k;
    cin>>a>>k;
    k--;
    while (k--){
        ll x = a;
        ll minn=LONG_LONG_MAX,maxn = LONG_LONG_MIN; 
        while(x>0){
            minn = min(minn,x%10);
            maxn = max(maxn,x%10);
            x=x/10;
        }
        if(minn==0){
            cout<<a<<endl;
            return;
        }
        a+=minn*maxn;
    }
    cout<<a<<endl;

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