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

bool perfectsq(int x){
    int k =sqrt(x);
    if(k*k==x)return true;
    return false;
}
void solve() {
    //code starts here
    int n;
    cin>>n;
    if(n%2==0){
        if(perfectsq(n/2)){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(n%4==0){
        if(perfectsq(n/4)){
            cout<<"YES"<<endl;
            return;
        }
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