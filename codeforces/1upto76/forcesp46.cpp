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
    string s;
    cin>>s;
    int i;
   for (i=1;i<s.size()-1;i++){
       if(s[i]<=s[i+1]) continue;
       else{
           if(s[i]==s[i-1]){
               for(int j=i+1;j<s.size()-1;j++){
                   if(s[j]==s[j+1]&&s[j]=='0'){
                       cout<<"NO"<<endl;
                       return;}
                       
                   }

                           cout<<"YES"<<endl;
                           return;
               }
               
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