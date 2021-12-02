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
    int n;
    cin>>n;
    string x,f="1",s="1";
    cin>>x;
    int i=1;
    while(i<n){
        if(x[i]=='1'){
            break;
        }
        if(x[i]=='0'){
            f+='0';
            s+='0';
            i++;
            continue;
            }
            if(x[i]=='2'){
                f+='1';
                s+='1';
                i++;
                continue;
            }
    }
    if(i==n){
        cout<<f<<endl<<s<<endl;
        return;
    }
    f+='1';
    s+='0';
    i++;
    for (;i<n;i++){
        if(x[i]=='0'){
            f+='0';
            s+='0';

        }
        else if(x[i]=='1'){
            f+='0';
            s+='1';
        }
        else{
            f+='0';
            s+='2';
        }
    }
    cout<<f<<endl<<s<<endl;

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