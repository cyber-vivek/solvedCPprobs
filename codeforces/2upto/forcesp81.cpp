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
    string s;
    cin>>s;
    if(s.substr(0,4)=="2020"){
        cout<<"YES"<<endl;
        return;
    }
    if(s.substr(n-4,4)=="2020"){
        cout<<"YES"<<endl;
        return;
    }
    if(s.substr(0,3)=="202"&&s[n-1]=='0'){
        cout<<"YES"<<endl;
        return;
    }
    if(s.substr(0,2)=="20"&&s.substr(n-2,2)=="20"){
        cout<<"YES"<<endl;
        return;
    }
    if(s.substr(0,1)=="2"&&s.substr(n-3,3)=="020"){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

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