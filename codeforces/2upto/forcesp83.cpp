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
    int c1,c2,c3,a1,a2,a3,a4,a5;
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
    if(c1<a1){
        cout<<"NO"<<endl;
        return;
    }
    c1-=a1;
    if(c2<a2){
        cout<<"NO"<<endl;
        return;
    }
    c2-=a2;
    if(c3<a3){
        cout<<"NO"<<endl;
        return;
    }
    c3-=a3;
    if(a4>c1) a4-=c1;
    else a4=0;
    if(a5>c2)a5-=c2;
    else a5=0;
    if(a4+a5<=c3){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

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