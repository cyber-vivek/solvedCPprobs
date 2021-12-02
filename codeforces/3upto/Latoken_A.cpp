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
    vector<string> v;
    string s;
    for(int i =0;i<n;i++){
        cin>>s;
        v[i]=s;
    }
    char pre = NULL;
    for(int i =0;i<n;i++){
              if(for_each(v[i].begin(),v[i].end(),[](char a){return a=='.';})){
                if(pre =='R'){
                    for(int k =0;k<m;k++){
                        if(k&1){
                            v[i][k]='R';
                        }
                        else{
                            v[i][k]='W';
                        }
                    }
                    pre = 'W';
                }
                else if(pre == 'W'){
                     for(int k =0;k<m;k++){
                        if(k&1){
                            v[i][k]='W';
                        }
                        else{
                            v[i][k]='R';
                        }
                    }
                    pre = 'R';
                }
                else{
                    pre = NULL;
                }
            }
        for(int j =0;j<m;j++){
            if(v[i][j]!='.'){
                for(int l = 1;l<m;l++){
                    if(v[i][j]=='R'){
                        if(l&1) {
                            if(j+l<m)
                            v[i][j+l]='W';
                            if(j-l>=0)
                            v[i][j-l]='W';

                        }
                        else{
                            if(j+l<m)
                            v[i][j+l]='R';
                            if(j-l>=0)
                            v[i][j-l]='R';
                        }
                        if(pre!=NULL&&pre==v[i][1]){
                            cout<<"NO"<<endl;
                        }
                        pre = v[i][1];
                    }
                    else{

                    }
                }
            }
        }
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