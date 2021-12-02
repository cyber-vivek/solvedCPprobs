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
    int n,k=INT_MAX;
    cin>>n;
    vi v(n);
    for(int &x:v)cin>>x;
    if(v[n-1]>=0)v.push_back(INT_MIN);
    else{
        v.push_back(INT_MAX);
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(v[i]>=0&&v[i+1]>=0){
             if(k!=INT_MAX){
                k=max(k,v[i+1]);
            }
            else
            k=max(v[i],v[i+1]);
            continue;
        }
        else if(v[i]<0&&v[i+1]<0){
            if(k!=INT_MAX){
                k=max(k,v[i+1]);
            }
            else
            k=max(v[i],v[i+1]);
            continue;
        }
        if(k==INT_MAX)
        sum+=v[i];
        else{
            sum+=k;
            k=INT_MAX;
        }
        // deb(sum);
    }
    cout<<sum<<endl;

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