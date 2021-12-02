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
    int xa,ya,xb,yb,xf,yf;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    if(xa==xb&&xb==xf){
        if((yf>yb&&yf>ya)||(yf<yb&&yf<ya))
        cout<<abs(yb-ya)<<endl;
        else
        cout<<abs(yb-ya)+2<<endl;
        return;
    }
    if(ya==yb&&yb==yf){
        if((xf>xb&&xf>xa)||(xf<xa&&xf<xb))
        cout<<abs(xa-xb)<<endl;
        else
        cout<<abs(xa-xb)+2<<endl;
        return;
    }
    cout<<abs(xa-xb)+abs(ya-yb)<<endl;
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