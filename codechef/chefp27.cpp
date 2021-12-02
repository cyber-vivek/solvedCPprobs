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
    int n;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    int q;
    cin>>q;
    while(q--){
        int x,k;
        int d=0;
        cin>>x>>k;
        int o=x;
        while(1){
            if(x==n+1){
                if(k>0){
                    d=d-k*(n-o+1);
                }
                break;}
            if(v[x-1]==0){
                x++;
                d+=k;
                continue;
            }
            if(v[x-1]>=k){
                v[x-1]-=k;
                break;
            }
            if(v[x-1]<k){
                k-=v[x-1];
                v[x-1]=0;
                d+=k;
                x++;
                if(k==0){
                    break;
                }
            }
        }
        cout<<d<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    // int t = 1;
    // cin >> t;
    // while(t--) {
      solve();
    // }
    return 0;
}