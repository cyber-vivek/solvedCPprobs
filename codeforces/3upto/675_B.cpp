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
    int n,m,x;
    cin>>n>>m;
    vector<vector<ll int>> v(n);
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>x;
            v[i].push_back(x);
        }
    }
    ll op = 0;
    for(int i =0;i<ceil(n/(2*1.0));i++){
        for(int j = 0;j<ceil(m/(2*1.0));j++){
            ll med = 0,sum = 0;
            vi temp;
            temp.push_back(v[i][j]);
            temp.push_back(v[n-i-1][j]);
            temp.push_back(v[i][m-j-1]);
            temp.push_back(v[n-i-1][m-j-1]);
            sort(all(temp));
            med =temp[1];
            // deb(sum);
            // deb(avg);
            op+=abs(med-v[i][j]);
            if(n-i-1!=i)
            op+=abs(med-v[n-i-1][j]);
            if(m-j-1!=j)
            op+=abs(med-v[i][m-j-1]);
            if(n-i-1!=i&&m-j-1!=j)
            op+=abs(med-v[n-i-1][m-j-1]);

        }
    }
    cout<<op<<endl;

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