#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define FIN(i,n) for(int i=0;i<n;i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define vp vector<pair < int, int > >
#define vll vector<long long>
#define f first
#define s second
#define MINV(v) *min_element(v.begin(),v.end())
#define MINIV(v) min_element(v.begin(),v.end())-v.begin()
#define all(v) v.begin(), v.end()
#define pb push_back
#define TR(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

// make_pair()
//vector<vector<char>> v(r, vector<char> (c,0));
int mod=1e9+7;
int INF=1e18;

bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;
    if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)
    if(n%i==0||n%(i+2)==0)return false;return true;}

int nCr(int n,int r){int res=1;if(n<r)return -1;r=min(r,n-r);
    loop(i,0,r){res*=(n-i);res/=(i+1);}return res;}

int nPr(int n,int r){int res=1;if(n<r)return -1;
    loop(i,0,r)res*=(n-i);return res;}

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n%2==0){
        int c=k%n;
        if(c==0)
            cout<<n<<"\n";
        else
            cout<<c<<"\n";
    }
    else if(n>2*k){
        cout<<k%n<<"\n";
    }
    else{
        int x=(k-1)/(n-1);
        int posb=1+(x%n);
        int posa=n-(k%n);
        int y=k-(x*(n-1)+1);
        int ans;
        if(y<n/2){
            ans=(posb+y)%n;
        }
        else{
            ans=(posb+y+1)%n;
        }
        if(ans==0)
            cout<<n<<"\n";
        else
            cout<<ans<<"\n";
    }
}

signed main(){
    fast
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}