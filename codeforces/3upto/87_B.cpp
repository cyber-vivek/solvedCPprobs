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
    vi o,tw,t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            o.push_back(i);
        }
        else if(s[i]=='2') tw.push_back(i);
        else t.push_back(i);
    }
    if(o.size()==0||tw.size()==0||t.size()==0){
        cout<<0<<endl;
        return;
    }
    int minl = INT_MAX;
    int a=0,b = 0,c = 0;
    while(1){
        int m = min(min(o[a],tw[b]),t[c]);
        int ma = max(max(o[a],tw[b]),t[c]);
        minl = min(minl,ma-m);
        if(m == o[a]){
            if(a!=o.size()-1){
                a++;
            }
           else break;
        }
       else if(m == tw[b]){
            if(b!=tw.size()-1){
                b++;
            }
            else break;

        }
       else if(m == t[c]){
            if(c!=t.size()-1){
                c++;
            }
            else break;
        }
    }
    cout<<minl+1<<endl;

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