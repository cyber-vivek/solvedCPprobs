#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=1;i<n;i++)
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
    int n,i;
    cin>>n;
    int a[n];
    for(auto &x :a) cin>>x;
    int cont=0,max=0,hv=0;
    fo(i,n-1){
        if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1])){
            cont++;
            hv++;
            if(cont>max) max=cont;
        }
        else cont =0;
    }
    if(max==0){
        cout<<0<<endl;
        return;
    }
    if(max==1){
        cout<<hv-1<<endl;
        return;
    }
    if(max==2){
        cout<<hv-2<<endl;
        return;
    }
    cout<<hv-3<<endl;
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