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
    vi v(n+2);
    ll sum=0;
    for(int &x:v) {
        cin>>x;
        sum+=x;
    }
    sort(all(v));
    int x,sn;
    if(sum-v[n+1]==2*v[n]){
        v.pop_back();
        v.pop_back();
        for (int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n+1;i++){
        if(sum-v[i]==2*v[n+1]){
            v.erase(v.begin()+i);
            v.pop_back();
            for(int x:v){
                cout<<x<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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