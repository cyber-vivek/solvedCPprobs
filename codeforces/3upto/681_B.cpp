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
    string  s;
    cin>>a>>b;
    cin>>s;
    int n = s.size();
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            l++;
        }
        else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            r--;
        }
        else{
            break;
        }
    }
    // deb(l);
    // deb(r);
    int cost = 0,temp = 0;
    for(int i =l;i<=r;i++){
        // deb(cost);
        // deb(temp);
        // deb(i);
        if(s[i]=='1'){
            if(temp!=0){
                if(temp<a){
                    cost+=temp;
                    temp = 0;
                    while(1){
                if(i!=r){
                    if(s[i+1]=='1'){
                        i++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
                continue;
                }
                temp = 0;
                            }
            cost+=a;
            while(1){
                if(i!=r+1){
                    if(s[i+1]=='1'){
                        i++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        else{
            temp+=b;
            while(s[i+1]=='0'){
                temp+=b;
                i++;
            }
        }

    }
    cout<<cost<<endl;
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