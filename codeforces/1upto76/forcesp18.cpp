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
    int U,D,R,L,n,i;
    cin>>n>>U>>R>>D>>L;
        bool found = false;
    fo(i,16){
        int u=0,d=0,r=0,l=0;
        if (i&1){
            u++;
            l++;
        }
        if(i&2){
            l++;
            d++;
        }
        if(i&4){
            d++;
            r++;
        }
        if(i&8){
            r++;
            u++;
        }
        deb2(u,U);
        deb2(r,R);
        deb2(d,D);
        deb2(l,L);
        if (u>U||u+n-2<U) continue;
        if (r>R||r+n-2<R) continue;
        if (d>D||d+n-2<D) continue;
        if (l>L||l+n-2<L) continue;
        found =true ;
        break;
    }
    if (found ==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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