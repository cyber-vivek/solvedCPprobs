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
int x1,yc1,x4,y4;
void solve() {
    //code starts here
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    if(y==n&&x==n){
        cout<<n<<" "<<n<<endl;
        return;
    }
    if(y<=x){
     x1=n;
     yc1=(n+y-x);
     x4=x-y;
     y4=0;
        
    }
    else{
         x1=n+x-y;
         yc1=n;
         x4=0;
         y4=y-x;
    }
    
    int r=k%4;
    if(r==0){
        cout<<x4<<" "<<y4<<endl;
    }
    else if(r==1){
        cout<<x1<<" "<<yc1<<endl;
    }
    else if(r==2){
        cout<<yc1<<" "<<x1<<endl;
    }
    else{
        cout<<y4<<" "<<x4<<endl;
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