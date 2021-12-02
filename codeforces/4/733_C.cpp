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
int calsc(int k,vector<int> m){
      int  index = 100 , score = 0;
    while(k>0){
        if(m[index]>k){
            score += k*index;
            k = 0;
        }
        else{
            score+=index*m[index];
            k = k-m[index]; 
        }
        index--;

    }
    return score;
}
void solve() {
    //code starts here
    int n;
    cin>>n;
    vector<int> m(101),l(101);
    int s;
    for(int i = 0 ;i<n;i++){
        cin>>s;
        m[s]++;
    }
    for(int i = 0 ;i<n;i++){
        cin>>s;
        l[s]++;
    }
    int sc = n-n/4;
    int mysc=0, llsc=0;
    mysc = calsc(sc,m);
    llsc = calsc(sc,l);
    if(mysc>=llsc){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    n++;
    for(int i = 0 ;i<n;i++){
        ans++;
        m[100]++;
        l[0]++;
        sc = n - n/4; 
        // deb(n);
        // deb(sc);
        mysc = calsc(sc,m);
        llsc = calsc(sc,l);
        n++;
    // deb2(mysc,llsc);
    // deb(ans);
        if(mysc>=llsc){
            cout<<ans<<endl;
            return;
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