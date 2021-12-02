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
    double a,b,c;
    cin>>a>>b>>c;
    if(c/b>a){
        cout<<1<<" "<<-1<<endl;
        return;
    }
    if(c/b==a){
        if(b==1)
        cout<<-1<<" "<<-1<<endl;
        else 
        cout<<1<<" "<<-1<<endl;
        return;
    }
    if(a>=c){
        cout<<-1<<" "<<int(b)<<endl;
    }
    else
    cout<<1<<" "<<int(b)<<endl;


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