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
    string s;
    cin>>s;
    vi v(s.size());
    char pre;
    int ans =s.size();
    for(int i = 0;i<s.size();i++){
        int c =0;
        pre =s[i];
        if(s[i]!='?'){
            if(i!=0){
                v[i]=v[i-1]-1;
            }
        }
        if(s[i]=='?'){
            if(i!=s.size()-1){
                if(s[i+1]!='?'){
                    v[i]=v[i-1]-1;
                }
                else{
                    if(i!=0){
                        if(s[i-1]=='?'){
                            v[i]=v[i-1]-1;
                        }
                    }
                }
            }
        }
        for(int j =i+1;j<s.size();j++){
            if(pre=='?'){
                if(s[j]=='?'){
                    c++;
                }
                else{
                    pre = s[j];
                    c++;
                }
            }
            else{
                if(pre=='0'){
                    if(s[j]=='?'){
                        pre='1';
                        c++;
                    }
                    else if(s[j]=='1'){
                        pre = '1';
                        c++;
                    }
                    else{
                        break;
                    }
                }
                else{
                     if(s[j]=='?'){
                        pre='0';
                        c++;
                    }
                    else if(s[j]=='0'){
                        pre = '0';
                        c++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        v[i] = c;
        ans+=c;
    }
    cout<<ans<<endl;

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