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

void solve() {
    //code starts here
    int n;
    cin>>n;
    int ng=0;
    int x=n;
    while(x!=0){
        x=x/10;
        ng++;
    }
    int i=ng;
    int k= pow(10,ng-1);
    int d= n/k;
    int g=d;
    ng--;
    while (ng!=0){
        d=d*10+g;
        ng--;
    }
    if(n>=d){
        cout<<9*(i-1)+g<<endl;
    }
    else cout<<9*(i-1)+g-1<<endl;
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