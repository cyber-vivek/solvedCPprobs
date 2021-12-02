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
    int res=0;
    vi v(n);
    for(int &x:v){
        cin>>x;
        res=res^x;
    }
    if(res==0){
        cout<<"YES"<<endl;
        return;
    }
    int k=0;
    int c=0;
    for(int x:v){
        k=k^x;
        if(k==res){
            c++;
            k=0;
        }
    }
    if(c>=3){
        cout<<"YES"<<endl;
    }
    else
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