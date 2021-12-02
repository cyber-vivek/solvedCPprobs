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

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,q,n1=0;
    cin>>n>>q;
    vi v(n);
    for (auto&x:v){
        cin>>x;
        if(x==1)n1++;
    }
    int t,y;
    while(q--){
        cin>>t;
        if(t==1){
            cin>>y;
            if(v[y-1]==0){
                n1++;
                v[y-1]=1;
            }
            else{
                n1--;
                v[y-1]=0;
            }
        }
        else{
            cin>>y;
            if(y<=n1) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }

    return 0;
}