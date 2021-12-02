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
void solve(){
     string s;
      cin>>s;
      if(s.front()==s.back()){
          cout<<"NO"<<endl;
          return;
      }
      char th,fr=s.front(),bk=s.back();
      int sz=s.size();
      int f=count(all(s),s.front()),b=count(all(s),s.back()),r=sz-(f+b);
      if(f<b) th='(';
      else if(f==b){
        if(f+b!=sz){
            cout<<"NO"<<endl;
            return;
        }
      }
      else th =')';
      for (auto &x:s){
          if(x==fr)x='(';
         else if(x==bk)x=')';
          else x=th;
      }
      stack<char> st;
      for(auto x:s){
          if(x=='(') st.push(x);
          else {
              if(st.empty()==true){
                  cout<<"NO"<<endl;
                  return;
              }
              st.pop();
          }
      }
      if(st.empty()==true) cout<<"YES"<<endl;
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