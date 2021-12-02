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
// void solve() {
//     //code starts here
    

// }
 long long solve(vector<int> &ar, int n) {
        // code here
        int mxx;
        long long ans = 0;
        for(int i = 1;i<n;i++){
            mxx = ar[i];
        long long sum = ar[i];
            for(int j = i-1;j>=0;j--){
                mxx = max(mxx,ar[j]);
                sum+=ar[j];
                if(sum>2*mxx)ans++;
            }
        }
        return ans;
    }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
cin>>n;
vi v(n);
for(int &x:v)cin>>x;
cout<<solve(v,n);

    return 0;
}