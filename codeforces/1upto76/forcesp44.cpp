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
    int n,j;
    cin>>n>>j;
    n=n-j+3;
    for(int i=0;i<(j-3);i++) cout<<1<<" ";
    if(n&1){
        cout<<1<<" "<<n/2<<" "<<n/2<<endl;
    }
    else{
        if(n/2&1){
            cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
        }
        else{
            if (n==4) cout<<2<<" "<<1<<" "<<1<<endl;
            else{
                cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
            }
        }
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