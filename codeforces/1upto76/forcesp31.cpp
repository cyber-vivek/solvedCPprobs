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
ll gcd(ll a,ll b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
void solve() {
    //code starts here
    ll a,b,m;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    ll c=gcd(a,b);
    if(a==c)m=b/a;
    else if(b==c)m=a/b;
    else {
        cout<<-1<<endl;
        return;
    }
    c=0;
    while(m!=1){
        if(m%8==0){
            m/=8;
            c++;
        }
        else if(m%4==0){
            m/=4;
            c++;
        }
        else if(m%2==0){
            m/=2;
            c++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<c<<endl;
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