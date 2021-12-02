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
bool isprime(int x){
    if(x==1){
        return false;
    }
    if(x==2||x==3){
        return true;
    }
    if(x%2==0||x%3==0){
        return false;
    }
    for(int i = 5;i*i<=x;i+=6){
        if(x%i==0||x%(i+2)==0) return false;
    }
    return true;
}
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
    int i;
    for(i=1;i<INT_MAX;i++){
        if(isprime(n-1+i)&&(!isprime(i))){
            break;
        }
    }
    for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
            if(k==j){
                cout<<i<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
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