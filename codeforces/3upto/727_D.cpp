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
class c{
    public:
    ll a,b;
     bool operator < (const c&rhs) const {return b<rhs.b;}
    bool operator > (const c&rhs) const {return b>rhs.b;}
};
void solve() {
    //code starts here
    int n;
    cin>>n;
    vector<c> v(n);
    for(auto &x:v)cin>>x.a>>x.b;
    sort(all(v));
    int i = 0 ,j =n-1;
    ll buyed = 0;
    ll sum = 0;
    while(i<j){
        if(buyed<v[i].b){
            if(v[i].b-buyed<v[j].a){
                sum+=(v[i].b-buyed)*2;
                v[j].a-= (v[i].b-buyed);
                buyed+=v[i].b-buyed;
            }
            else{
                buyed+=v[j].a;
                sum+=v[j].a*2;
                v[j].a = 0;
                j--;
            }
        }
        else{
            buyed+=v[i].a;
            sum+=v[i].a*1;
            i++;
        }
    }
    if(buyed>=v[i].b){
        sum+=v[i].a*1;
    }
    else{
        if(v[i].a+buyed<v[i].b){
            sum+=v[i].a*2;
        }
        else{
            sum+=(v[i].b-buyed)*2;
            sum+=(v[i].a-(v[i].b-buyed));
        }
    }
    cout<<sum;

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