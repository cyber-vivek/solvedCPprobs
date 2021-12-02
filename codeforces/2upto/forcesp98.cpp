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
    int max = INT_MIN;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>max){
            max=v[i];
        }
    }
    // int k = v[0];
    // if(all_of(all(v),[k](int x){return x==k;})){
    //     cout<<-1<<endl;
    //     return;
    // }
    if(v[0]==max&&v[1]!=max){
        cout<<1<<endl;
        return;
    }
    if(v[n-1]==max&&v[n-2]!=max){
        cout<<n<<endl;
        return;
    }
    for(int i=1;i<n-1;i++)
    if(v[i]==max){
        if(v[i-1]!=max||v[i+1]!=max){ cout<<i+1<<endl;
        return;}
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