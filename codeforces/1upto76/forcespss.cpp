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
ll mod = pow(10, 9) + 7;
void solve() {
    //code starts here
     int n;
    cin >> n;
    vi v(n);
    ll min = 1e16;
    int x;
    int i=0;
    while(i<n){
      cin >> v[i];
      if (min > v[i])
      {
        min = v[i];
        x = i;
      }
      i++;
    }
    cout << n - 1 << endl;
    ll mod1 = 1e9 + 9;
    for (int i = 0; i < n ; i++)
    { if (i != x)
      { if (i % 2 == 0)
          cout << i + 1 << " " << x + 1 << " " << mod << " " << v[x] << endl;
        else
        {
          cout << i + 1 << " " << x + 1 << " " << mod1 << " " << v[x] << endl;
        }
      }

    }

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