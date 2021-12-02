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
    ll n,a,b;
    cin>>n>>a>>b;
    set<ll>q;
    if(n==1){
        cout<<"Yes"<<endl;
    }
    q.insert(1);
    while(*q.begin()<n){
        if(a!=1){
        ll k =*q.begin()*a;
        if(k==n){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            q.insert(k);
        }
        }
            ll k =*q.begin()+b;
            if(k==n){
                 cout<<"Yes"<<endl;
            return;
            }
            else q.insert(k);
        q.erase(q.begin());
    }
    cout<<"No"<<endl;

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