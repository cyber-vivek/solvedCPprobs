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
    int n,k,c=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0;
    for(;i<n;i++){
        if(s[i]=='*'){
             c++;
            break;
           
        }
    }
    for(;i<n;){
bool p=false;
int t=(i+k<n)?(i+k):n;
for (;t>i;t--){
    if(s[t]=='*'){
        p=true;
        i=t;
        break;
    }}
    if(p){
        c++;
    }
    else{
        break;
    }
    }
    cout<<c<<endl;

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