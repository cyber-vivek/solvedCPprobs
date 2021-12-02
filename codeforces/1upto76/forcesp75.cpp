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
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if((a&1)&&(b&1)){
        cout<<"-1"<<endl;
        return;
    }
    int i=0,j=s.size()-1;
    int ca=0,cb=0,u=0;
    while(i<j){
        if((s[i]==s[j])){
            if(s[i]!='?'){
                if(s[i]=='0'){ ca+=2;}
                else cb+=2;
            }
            else{
                u+=2;
            }
        }
        else if((s[i]!='?')&&(s[j]!='?')){
            cout<<-1<<endl;
            return;
        }
        else{
            if(s[i]=='?'){
                if(s[j]=='1'){
                    s[i]='1';
                    cb+=2;
                }
                else{
                    s[i]='0';
                    ca+=2;
                }
            }
            else{
                 if(s[i]=='1'){
                    s[j]='1';
                    cb+=2;
                }
                else{
                    s[j]='0';
                    ca+=2;
                }
            }
        }
        i++;
        j--;
    }
    // cout<<ca<<" "<<cb<<" "<<u<<" "<<s;
    if(i==j){
        if(s[i]=='?'){
        if(a&1){
            s[i]='0';
            a--;
        }
        else if(b&1){
            s[i]='1';
            b--;
        }
        else{
            cout<<-1<<endl;
        }
        }
        else{
            if(s[i]=='0'){
                ca++;
            }
            else cb++;
        }
    }
    i=0;
    j=s.size()-1;
    while(i<j){
        if(s[i]=='?'){
            if(ca<a-1){
                s[i]='0';
                s[j]='0';
                ca+=2;
            }
            else if(cb<b-1){
                s[i]='1';
                s[j]='1';
                cb+=2;
            }
            else 
            {
                cout<<-1<<endl;
                return;
            }
        }
        i++;
        j--;
    }
    if(ca==a&&cb==b)
    cout<<s<<endl;
    else 
    cout<<-1<<endl;

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