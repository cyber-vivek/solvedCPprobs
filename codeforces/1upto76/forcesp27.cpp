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
    int rgb=0,r,g,b,w;
    int w1=0;
    cin>>r>>g>>b>>w;
    if(r%2!=0)rgb++;
    if(g%2!=0)rgb++;
    if(b%2!=0)rgb++;
    if(w%2!=2)w1++;
    if(rgb==3||rgb==0){
        cout<<"YES"<<endl;
        return;
    }
    if(rgb==2){
        if(w1==1&&r!=0&&g!=0&&b!=0){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }
    if(rgb==1&&w1==0) cout<<"YES"<<endl;
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