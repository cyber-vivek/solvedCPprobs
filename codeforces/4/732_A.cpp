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
    int n;
    cin>>n;
    int suma = 0,sumb = 0;
    vi a(n),b(n);
    for(int &x:a)
    {cin>>x;
    suma+=x;}

    for(int &x:b){
        cin>>x;
        sumb+=x;}
        if(suma!=sumb){
            cout<<-1<<endl;
            return;
        }
        int diff = 0;
        for(int i = 0 ;i<n;i++){
            diff += abs(a[i]-b[i]);
        }
        cout<<diff/2<<endl;

    for(int i = 0;i<n;i++){
        if(a[i]==b[i]) continue;
        if(a[i]<b[i]){
            for(int j = i+1;j<n;j++){
                if(a[j]==b[j])continue;
                if(a[j]>b[j]){
                    while(a[i]<b[i]&&a[j]>b[j]){
                        a[i]++;
                        a[j]--;
                        cout<<j+1<<" "<<i+1<<endl;
                        // deb2(a[i],a[j]);
                    }
                    if(a[i]==b[i])break;
                }
            }
        }
        else{
              for(int j = i+1;j<n;j++){
                if(a[j]==b[j])continue;
                if(a[j]<b[j]){
                    while(a[i]>b[i]&&a[j]<b[j]){
                        a[i]--;
                        a[j]++;
                        cout<<i+1<<" "<<j+1<<endl;
                        // deb2(a[i],a[j]);
                    }
                    if(a[i]==b[i])break;
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