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
    int n,k,x,sum=0,min=INT_MAX;
    cin>>n>>k;
    vi s(n-k+1);
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(i>=k-1){
            if(i==k-1) s[i-k+1]=sum;
            else s[i-k+1]=sum-s[i-k];
        }
    }
    // // for(auto x:v) cout<<x;
    // for(int i=0;i+k<=n;i++){
    //     x=k-count(v.begin()+i,v.begin()+i+k,0);
    //     // deb(x);
    //     // cout<<count(v.begin()+i,v.begin()+i+k,0)<<endl;
    //     if(min>x) min=x;
    // }
    // cout<<min;
    min=*min_element(all(s));
    if(min!=INT_MAX)
    cout<<((sum-min)+(min*(min+1))/2)<<endl;
    else cout<<(min*(min+1))/2<<endl;
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