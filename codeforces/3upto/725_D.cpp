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
ll primeFactors(ll a,ll b)
{
    ll count = 0;
        while (a % 2 == 0)
    {
       count++;
        a = a/2;
    }
        while (b % 2 == 0)
    {
       count++;
        b = b/2;
    }
    for (int i = 3; i <= sqrt(max(a,b)); i = i + 2)
    {
        while (a % i == 0)
        {
            count++;
            a = a/i;
        }
        while (b % i == 0)
        {
            count++;
            b = b/i;
        }
    }
    if (a > 2)
        count++;
    if (b > 2)
        count++;
        return count;
}
void solve() {
    //code starts here
    ll a,b,k;
    cin>>a>>b>>k;
    if(k==1){
        if(min(a,b)==__gcd(a,b)&&a!=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    ll k1 = primeFactors(a,b);
    if(k1>=k){
        cout<<"YES"<<endl;
    }
    else
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