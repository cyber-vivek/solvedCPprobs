#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef vector<double>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;

void solve() {
    //code starts here
    int n,i,a,b;
    cin>>n;
    vi v;
    vi v1;
    fo(i,n*2){
        cin>>a>>b;
        if(a==0) v.push_back(abs(b));
        else v1.push_back(abs(a));
    }
     double dis= 0;
    sort(all(v));
    sort(all(v1));
    fo(i,n){
        dis+=sqrt(v[i]*v[i]+v1[i]*v1[i]);
        // deb(dis);
    }
    cout<<fixed<<setprecision(15)<<dis<<endl;
    // printf("%0.15f",dis);
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