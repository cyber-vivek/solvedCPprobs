#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=1;i<n-1;i++)
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
    int n,x,i=0;
    cin>>n;
    int a[n];
    for (auto &x:a){
        cin>>x;
    }
    int min =a[0],j,pos=1;
    fo(i,n){
        if(min>a[i]){ pos=i+1; min=a[i];continue;}
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                cout<<"YES"<<endl<<pos<<" "<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

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