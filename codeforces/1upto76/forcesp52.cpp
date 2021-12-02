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
    vector<string> v(n);
    int a=0,b=0,c=0,d=0;
    for(string &s:v) cin>>s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]=='.'){
                continue;
            }
            if(a==0){
                a=i+1;
                b=j+1;
            }
            else{
                c=i+1;
                d=j+1;

            }
        }
    }
    if(a==c||b==d){
        if(a==c){
            if(a!=n){
                v[a][b-1]='*';
                v[c][d-1]='*';
            }
            else{
                 v[a-2][b-1]='*';
                v[c-2][d-1]='*';
            }
        }
        else{
            if(b!=n){
                v[a-1][b]='*';
                v[c-1][d]='*';
            }
            else{
                  v[a-1][b-2]='*';
                v[c-1][d-2]='*';
            }
        }
    }
    else {
        v[a-1][d-1]='*';
        v[c-1][b-1]='*';
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
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