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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        int l,r;
        cin>>l>>r;
        int i=1;
        bool b=false;
        while(l-i-1>=0||r+i-1<n){
            if(l-i-1>=0){
            if(s[l-1]==s[l-i-1]){
                b=true;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(r+i-1<n){
            if(s[r-1]==s[r+i-1]){
                b=true;
                cout<<"YES"<<endl;
                break;
            }
        }
        i++;
        }
        if(b==false){
            cout<<"NO"<<endl;
        }
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