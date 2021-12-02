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
    int f=1;
    int x,y;
    cin>>x>>y;
    if(y>x) f=0;
    int a,b;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        if((a-x)>=0&&(b-y)>=0&&(a-x)>=(b-y)) { x=a;y=b; continue;}
        else{
            f=0;
        }
        x=a;
        y=b;
    }
    if(f==1) cout<<"YES"<<endl;
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