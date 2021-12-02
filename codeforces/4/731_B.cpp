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
    if(s.size()==1){
        if(s =="a")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        return;
    }
    bool found = true;
    char e = s[0];
    int i = 1,j = s.size()-1;
    while(i<=j){
        if(s[i]+1==e){
            e = s[i];
            i++;
            continue;
        }
        if(s[j]+1==e){
            e = s[j];
            j--;
            continue;
        }
        found = false;
        break;
    }
    if(found == true&&e=='a'){
        cout<<"YES"<<endl;
        return;
    }
    found = true;

     i = 0,j = s.size()-1;
    e = s[j];
    j--;
    while(i<=j){
        if(s[i]+1==e){
            e = s[i];
            i++;
            continue;
        }
        if(s[j]+1==e){
            e = s[j];
            j--;
            continue;
        }
        found = false;
        break;
    }
    if(found == true&&e=='a'){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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