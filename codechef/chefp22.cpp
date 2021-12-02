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
    ll n;
    map<int,int> m={{1,20},{2,36},{3,51},{4,60},{5,76},{6,88},{7,99},{8,104}};
    cin>>n;
    if(n<5){
    if(n==1){
      cout<<20<<endl;
      return;
    }
    if(n==2){
      cout<<36<<endl;
      return;
    }
    if(n==3){
      cout<<51<<endl;
      return;
    }
    if(n==4){
      cout<<60<<endl;
      return;
    }}
    if(n<9){
      if(n==5){
        cout<<76<<endl;
        return;
      }
      if(n==6){
        cout<<88<<endl;
        return;
      }
      if(n==7){
        cout<<99<<endl;
        return;
      }
      if(n==8){
        cout<<104<<endl;
        return;
      }
    }
    ll int r=n%4,k;
    if(r==0){
      k=n/4-2;
      r=8;
    }
    else{
      r+=4;
      k=n/4-1;
    }
    cout<<(k*44)+m[r]<<endl;
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