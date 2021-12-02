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
class monster{
    public:
    int at;
    int h;
    bool operator < (const monster & rhs) const {return at<rhs.at;}
};
void solve() {
    //code starts here
    int a,b,n;
    cin>>a>>b>>n;
    vector<monster> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i].at;
    }
    for (int i=0;i<n;i++){
        cin>>v[i].h;
    }
    // cout<<1;
    sort(all(v));
    for(int i=0;i<n-1;i++){
        int k=ceil(v[i].h/(a*1.0));
        b=b-k*v[i].at;
        if(b<=0){
            cout<<"NO"<<endl;
            return;            
        }
    }
        ll k=ceil(b/(v[n-1].at*1.0));
        if(k*a>=v[n-1].h){

    cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
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