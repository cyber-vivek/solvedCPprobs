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
// ll powermod(ll x,ll y,ll m){
//     if(y==0){
//         return 1;
//     }
//     ll r= powermod(x,y/2,m);
//     if(y&1){
//         return (r*r*x)%m;
//     }
//     return (r*r)%m;
// }
void solve() {
    //code starts here
    int n;
    cin>>n;
    vector<vector<int>> v(5,vector<int>(n));
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        vector<int> m(5);
        for(auto x:s){
            m[x-97]++;
        }
        int k =s.size();
        for(int j = 0;j<5;j++){
            v[j][i] = 2*m[j]-k;
        }
    }

    int maxn = INT_MIN;
    for(int i = 0;i<5;i++){
        int num = 0;
        int extra = 0;
        sort(all(v[i]),greater<int>());
        for(int j = 0;j<n;j++){
            extra +=v[i][j];
            if(extra>0){
                num++;
            }
            else {
                break;
            }
        }
        if(num>maxn){
            maxn= num;
        }
    }

    cout<<maxn<<endl;
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