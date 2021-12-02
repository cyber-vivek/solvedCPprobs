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
ll powermod(ll x,ll y,ll m){
    if(y==0){
        return 1;
    }
    ll r= powermod(x,y/2,m);
    if(y&1){
        return (r*r*x)%m;
    }
    return (r*r)%m;
}
void solve() {
    //code starts here
      string s;
    cin >> s;
    int n = s.size();

    vi z(n, -1);
    vi o(n, -1);
    vi dp(n);

    int ans = 1;

    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            o[i] = i;
        }
        else if (i != 0)
        {

            o[i] = o[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z[i] = i;
        }
        else if (i != 0)
        {

            z[i] = z[i - 1];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            dp[i] = dp[i - 1];
        }
        else if (s[i] == '0')
        {
            if (z[i - 1] == o[i - 1])
            {
                dp[i] = 0;
            }
            else if (o[i - 1] < z[i - 1])
            {
                int temp = z[i - 1];
                if ((i % 2) == (temp % 2))
                {
                    dp[i] = dp[temp];
                }
                else
                {
                    dp[i] = temp + 1;
                }
            }
            else
            {
                int temp = o[i - 1];
                if ((i % 2) != (temp % 2))
                {
                    dp[i] = dp[temp];
                }
                else
                {
                    dp[i] = temp + 1;
                }
            }
        }
        else if (s[i] == '1')
        {
            if (z[i - 1] == o[i - 1])
            {
                dp[i] = 0;
            }
            else if (z[i - 1] > o[i - 1])
            {
                int temp = z[i - 1];
                if ((i % 2) == (temp % 2))
                {
                    dp[i] = temp + 1;
                }
                else
                {
                    dp[i] = dp[temp];
                }
            }
            else
            {
                int temp = o[i - 1];
                if ((i % 2) == (temp % 2))
                {
                    dp[i] = dp[temp];
                }
                else
                {
                    dp[i] = temp + 1;
                }
            }
        }
        ans += (i + 1 - dp[i]);
    }
    cout << ans << endl;

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