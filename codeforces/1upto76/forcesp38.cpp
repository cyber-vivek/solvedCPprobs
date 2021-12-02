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

void solve() {
    //code starts here
    int n;
    cin>>n;
    vi v(n);
    for(auto &x:v) cin>>x;
    vi s(n,0);
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        if(i+1-v[i]<0){
            s[0]++;
            if(i+1<n)
            s[i+1]+=-1;
            continue;
        }
        s[i+1-v[i]]++;
        if(i+1<n)
        s[i+1]+=-1;
        
    }
    int sm=0;
    for(int i=0;i<n;i++){
        sm+=s[i];
        if(sm>0) cout<<1<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;

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