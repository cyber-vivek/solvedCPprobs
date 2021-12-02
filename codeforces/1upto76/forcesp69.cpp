#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
// #define lbr(v) for(int x:v)
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;

void solve() {
    //code starts here
    int n;
     cin>>n;
     int v[26];
     memset(v,0,sizeof(v));
     string s;
     cin>>s;
     for(int i=0;i<n;i++){
         if(v[s[i]-65]==0){
             v[s[i]-65]=1;
             if(i!=n-1){
             while(s[i]==s[i+1]){ i++;
             if(i==n-1) break;}
         }}
         else{ 
             cout<<"NO"<<endl;
             return;
         }
     }
     cout<<"YES"<<endl;

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