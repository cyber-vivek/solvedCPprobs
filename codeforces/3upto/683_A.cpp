#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
// #define lbr(v) for(int x:v)
typedef pair<int, int>	pii;
typedef vector<ll int>		vi;
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
class cl {
    public:
    ll v;
    ll i;
    bool operator < (const cl&rhs) const {return v<rhs.v;}
};
void solve() {
    //code starts here
    ll n,W;
    cin>>n>>W;
    vector<cl> v(n);
    ll x;
    for(int i =0;i<n;i++){
        cin>>v[i].v;
        v[i].i = i+1;
    }
    sort(all(v));
    vi in;
    ll sum = 0;
    for(int j = n-1;j>=0;j--){
        if(v[j].v>W){
            continue;
        }
        if(v[j].v>=ceil(W/(2*1.0))&&v[j].v<=W){
            in.push_back(v[j].i);
            sum = v[j].v;
            break;
        }
        else{
            sum+=v[j].v;
            in.push_back(v[j].i);
            if(sum>=ceil(W/(2*1.0))){
                break;
            }
        }
    }
    if(in.size()==0||sum<ceil(W/(2*1.0))){
        cout<<-1<<endl;
        return;
    }
    sort(all(in));
    cout<<in.size()<<endl;
    for(int j = 0;j<in.size();j++){
        cout<<in[j]<<" ";
    }
    cout<<endl;

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