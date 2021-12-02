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
    vector<ll> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    int length = 1;
    int minDiff = INT_MAX;
    for(int i =1;i<n;i++){
        if(v[i]>0){
            if(v[i-1]>0)break;
            if(minDiff>=v[i]){
                length++;
                break;
            }
            else break;
        }
        if(abs(v[i]-v[i-1])<minDiff) minDiff = abs(v[i]-v[i-1]);
        length++;
    }
    cout<<length<<endl;

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