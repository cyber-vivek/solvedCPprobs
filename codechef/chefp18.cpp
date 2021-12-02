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
    for (int i=0;i<s.size();i++){
        if(s[i]=='p'){
            // deb(s[i]);
            if(i+4<s.size()){
            if(s[i+1]=='a'&&s[i+2]=='r'&&s[i+3]=='t'&&s[i+4]=='y'){
                cout<<"pawri";
                i=i+4;
                continue;
            }

            }
            cout<<s[i];
        }
        else {
            cout<<s[i];
        }
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