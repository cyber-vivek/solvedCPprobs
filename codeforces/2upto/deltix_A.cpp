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
ll powermod(ll x,ll y,ll m){
    if(y==0){
        return 1;
    }
    ll r= powermod(x,y/2,m);
    if(y&1){
        return (r*r*x)%m;
    }
    return (r*r)%m;
}
void solve() {
    //code starts here
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    s="000"+s+"000";


    char c = false;
    while(m--){
        for(int i =3;i<n+3;i++){
            if(s[i]=='1'){
               int d =0;
                    if(s[i+1]=='0'&&s[i+2]!='1'){
                        s[i+1]='1';
                        c=true;
                        d = 1;
                    if(s[i+3]=='1'){ s[i+2]='1'; d=3;  };
                    }
                      if(s[i-1]=='0'&&s[i-2]!='1'){
                        s[i-1]='1';
                        c=true;
                        if(s[i-3]=='1') s[i-2]='1';
                    }
                    i=i+d;

            }
        }
        if(c==true){
            c=false;
        }
        else{
            break;
        }
    }
    // cout<<s<<endl;
    for(int i =3;i<n+3;i++){
        cout<<s[i];
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