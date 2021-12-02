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
    int i,j=s.size()-1,pos;
    for(i=0;i<=j;i++,j--){
        if(s[i]==s[j]&&s[i]=='a') continue;
        if(s[i]=='a'){
            pos=i;
            break;
        }
        else{
            pos=j;
            break;
        }
    }
    if(i>j){
        cout<<"NO"<<endl;
        return;
    }
     cout<<"YES"<<endl<<s.substr(0,pos+1)<<"a"<<s.substr(pos+1,(s.size()-(pos+1)))<<endl;

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