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
    string r1,r2,r3;
    cin>>r1>>r2>>r3;
    int winx=0,wino=0,nx=0,no=0;
    for(auto a:r1){
        if(a=='X')nx++;
        if(a=='O')no++;
    }
    for(auto a:r2){
        if(a=='X')nx++;
        if(a=='O')no++;
    }
    for(auto a:r3){
        if(a=='X')nx++;
        if(a=='O')no++;
    }
    // deb(no);
    // deb(nx);
    if(!(nx==no||nx==(no+1))){
        cout<<"3"<<endl;
        return;
    }
    // cout<<1;
    if(r1[0]==r1[1]&&r1[1]==r1[2]&&r1[0]!='_') { if(r1[0]=='X')winx++; else wino++;}
    if(r2[0]==r2[1]&&r2[1]==r2[2]&&r2[0]!='_') { if(r2[0]=='X')winx++; else wino++;}
    if(r3[0]==r3[1]&&r3[1]==r3[2]&&r3[0]!='_') { if(r3[0]=='X')winx++; else wino++;}
    if(r1[0]==r2[0]&&r2[0]==r3[0]&&r1[0]!='_') { if(r1[0]=='X')winx++; else wino++;}
    if(r1[1]==r2[1]&&r2[1]==r3[1]&&r1[1]!='_') { if(r1[1]=='X')winx++; else wino++;}
    if(r1[2]==r2[2]&&r2[2]==r3[2]&&r1[2]!='_') { if(r1[2]=='X')winx++; else wino++;}
    if(r1[0]==r2[1]&&r2[1]==r3[2]&&r1[0]!='_') { if(r1[0]=='X')winx++; else wino++;}
    if(r1[2]==r2[1]&&r2[1]==r3[0]&&r1[2]!='_') { if(r1[2]=='X')winx++; else wino++;}
    if(winx==0&&wino==0){
        if(nx==5){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
        return;
    }
    if(winx+wino==1){
        cout<<1<<endl;
        return;
    }
    if(winx==2){
        cout<<1<<endl;
        return;
    }
    cout<<3<<endl;
    

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