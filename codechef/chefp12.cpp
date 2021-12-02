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


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N,H,x,i,c,max=0;
    cin>>N>>H>>x;
    fo(i,N){
        cin>>c;
        if(c>max) max=c;
    }
    if(max+x>=H) cout<<"YES";
    else cout<<"NO";
    return 0;
}