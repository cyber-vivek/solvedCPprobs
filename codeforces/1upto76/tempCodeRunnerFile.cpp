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
    int n,pos=-1;
    cin>>n;
    vi v(n);
    for(auto &x:v){
        cin>>x; 
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"YES"<<endl<<0<<endl;
        return;
    }
    if(is_sorted(v.begin(),v.begin()+pos)&&is_sorted(v.begin()+pos,v.end())&&(v.front()>=v.back())){
        cout<<"YES"<<endl<<1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
//    auto it = min_element(v.begin(),v.end());
// //    cout<<*min_element(v.begin(),v.end());
// cout<<(it-v.begin());
//    if(it==v.begin()){
//        if(is_sorted(v.begin(),v.end())){
//            cout<<"YES"<<endl<<0<<endl;
//            return;
//        }
//        else{
//            cout<<"NO"<<endl;
//            return;
//        }
//    }
//    if(is_sorted(v.begin(),it)&&is_sorted(it,v.end())&&(v.front()>=v.back())){
//        cout<<"YES"<<endl<<1<<endl;
//        return;
//    }
//    cout<<"NO"<<endl;
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