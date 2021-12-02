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
    int h,w;
    cin>>h>>w;
    string s;
    for(int i = 0;i<w;i++){
        s+='0';
    }
    vector<string> v(h,s);
    for(int i = 0;i<w;i++){
        if(i&1){
            v[0][i]='0';
        }
        else{
            v[0][i]='1';
        }
    }
    for(int i = 0;i<w;i++){
        if(i&1){
            v[h-1][i]='0';
        }
        else{
            v[h-1][i]='1';
        }
    }

    for(int i = 2;i<=h-3;i++){
        if(!(i&1)){
            for(int j = 0;j<w;j++){
                if(j ==0||j==w-1){
                    v[i][j] ='1';
                }
                else{
                    v[i][j]='0';
                }
            }
        }
    }
    for(int i = 0;i<h;i++){
        cout<<v[i]<<endl;
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