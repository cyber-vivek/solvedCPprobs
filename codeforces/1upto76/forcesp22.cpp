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
int mi(int x){
    int d1=x%10;
    int d2=x/10;
    // deb2(d1,d2);
    if(d1==2)d1=5;
   else if(d1==5)d1=2;
    if(d2==5)d2=2;
   else if(d2==2)d2=5;
    return (10*d1+d2);

}
bool iv(int s){
    int o=s%10;
    s=s/10;
    if((o==0||o==1||o==2||o==5||o==8)&&(s==0||s==1||s==2||s==5||s==8))
    return true;
    else return false;
}
void pt(int a,int b){
    if(a<10) cout<<0<<a;
    else cout<<a;
    cout<<":";
    if(b<10) cout<<0<<b;
    else cout<<b;
    cout<<endl;
}
void solve() {
    //code starts here
    string t;
    int h,m;
    cin>>h>>m;
    cin>>t;
    int  t1=stoi(t.substr(0,2));
    int  t2=stoi(t.substr(3,2));
    // deb2(t1,t2);
    while(t1<h){
        if(iv(t1)&&iv(t2)){
           int mt1=mi(t1);
           int mt2=mi(t2);
        //    deb2(mt2,h);
           if(mt2<h&&mt1<m){
               pt(t1,t2);
               return;
           }
        }
            if(t2==m-1){
                t2=0;
                t1+=1;
            }
            else t2+=1;
    }
    cout<<"00:00"<<endl;
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