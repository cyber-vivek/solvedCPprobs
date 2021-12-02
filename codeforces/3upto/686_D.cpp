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
    ll n;
    cin>>n;
    ll maxcnt = 0,num;
    ll c =0;
    auto k =n;
    while (n%2==0){
        maxcnt++;
        n = n/2;
    }
    num = 2;
    for(ll i =3;i<=sqrt(n);i+=2){
        while(n%i==0){
            c++;
            n = n/i;
        }
        if(maxcnt<c){
            maxcnt = c;
            num = i;
        }
        c = 0;
    }
    if(n>2){
        c = 1;
         if(maxcnt<c){
        maxcnt = c;
        num = n;
    }
    }
    cout<<maxcnt<<endl;
    for(int i =1;i<maxcnt;i++){
        cout<<num<<" ";
    }
    // deb(k);
    // deb(num);
    // deb(maxcnt);
    // cout<<k/512;
    if(maxcnt ==1){
        cout<<k<<endl;
    }
    else{
    k = k/(pow(num,maxcnt-1));
    cout<<k<<endl;}

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