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
    int n;
    cin>>n;
    vi v(n);
    int ng=0,minn=INT_MAX, maxn = INT_MIN,minp = INT_MAX,z=0;
    for(int &x:v){
        cin>>x;
        if(x<0){
            ng++;
            if(maxn<x){
                maxn=x;
            }
            if(minn>x){
                    minn = x;
                }
        }
        else if(x>0){
            if(minp>x){
                minp =x;
            }
        }
            else{
                z++;
            }
    }
    // deb(ng);
    // deb(maxn);
    // deb(minp);
    // deb(z);
    // if(ng!=0){
    //     if(minp!=INT_MAX){
    //     if(abs(maxn)>=minp){
    //         if(z!=0){
    //             cout<<ng+1+1<<endl;
    //         }
    //         else
    //         cout<<ng+1<<endl;
    //     }
    //      else{
    //         cout<<ng+1<<endl;
    //     }
    //    }
    //    else{
    //        cout<<ng+z<<endl;
    //    }
       
    // }
    // else{
    //     if(minp==INT_MAX){
    //         cout<<z<<endl;
    //     }
    //     else{
    //         if(z!=0){
    //             cout<<2<<endl;
    //         }
    //         else{
    //             cout<<1<<endl;
    //         }
    //     }
    // }
    int p = 0;
    if(z==0){
        if(minp==INT_MAX) p=0;
        else{
            if(abs(maxn-minn)>=minp&&maxn!=minn)
            p=1;
            else 
            p =0;
        }
    }
    else{
        if(z==1){
            if(minp==INT_MAX){
                p=1;
            }
            else{
                if(ng!=0){
                    if((abs(maxn)>=minp)&&(abs(maxn-minn)>=minp))
                    p=2;
                    else
                    p=1;
                }
                else{
                    p=2;
                }
            }
        }
        else p=z;
    }
    cout<<ng+p<<endl;
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