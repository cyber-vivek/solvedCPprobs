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
    int n,x;
    cin>>n;
    vi e,o;
    for(int i =0;i<n;i++){
        cin>>x;
        if(x&1){
            o.push_back(x);
        }
        else {
            e.push_back(x);
        }
    }
    int ans=0;
    int k = e.size();
    ans+=(k*(k-1))/2;
    int count = 0;
    for (int i =0;i<o.size();i++){
        for(int j =0;j<o.size();j++){
            if(i!=j)
            if(__gcd(o[i],o[j])>1){
                count++;
            }
        }
    }
    // deb(ans);
    // deb(count);
    ans+=count/2+k*o.size();
    cout<<ans<<endl;
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