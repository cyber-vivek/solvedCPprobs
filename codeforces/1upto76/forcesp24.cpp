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
    int n,k,x,j;
    cin>>n>>k;
    vector<int> v;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    if (k==0){
        cout<<n<<endl;
        return;
    }
    sort(all(v));
    for(j=0;j<=v.back();j++){
        if(v[j]!=j){
            break;
        }
    }
    if(j>v.back()){
        cout<<n+k<<endl;
        return;
    }
    int p=ceil((j+v.back())/2.0);
    if(binary_search(all(v),p)){
        cout<<n<<endl;
    }
    else{
        cout<<n+1<<endl;
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