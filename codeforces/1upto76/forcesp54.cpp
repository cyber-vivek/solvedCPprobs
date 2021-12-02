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
    int n,k;
    cin>>n>>k;
    if(n%2==0){
      if((n/2)-1<k){
        cout<<-1<<endl;
        return;
      }
    }
    else{
      if(n/2<k){
        cout<<-1<<endl;
        return;
      }
    }
    int s=1,e=n;
    int l=3+2*(k-1);
    if(k==0)l=0;
    // deb(l);
    for(int i=0;i<l;i++){
      if(i%2==0){
        cout<<s<<" ";
        s++;
      }
      else{
        cout<<e<<" ";
        e--;
      }
    }
    while(s<=e){
      cout<<s<<" ";
      s++;
    }
    cout<<endl;

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