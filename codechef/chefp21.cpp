#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;

void solve() {
    //code starts here
    ll n,m,k,num;
    cin>>n>>m>>k;
    if(m==1&&n==1){
        cout<<k+2<<endl;
        return;
    }
    int res=(k+2)^(k+n+m);
    num=k+2+1;
    int x=min(m,n),c=2;
    while (num<(k+n+m)){
            if(c<=x){
                res=(res*(1000000)%c)^num;
                c++;
            }
            else{
                 res=(res*(1000000)%x)^num;
            }
        num++;
    }
    cout<<res<<endl;
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