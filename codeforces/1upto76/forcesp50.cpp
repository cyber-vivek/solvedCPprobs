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
int lcSub(string & X, string & Y, int m, int n)
{
    int LCSuff[m + 1][n + 1];
    int res = 0; 
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                res = max(res, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return res;
}

void solve() {
    //code starts here
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
    int ans=lcSub(a,b,m,n);
    cout<<m+n-2*ans<<endl;

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