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
    int a,b,c,d;
    string s;
    cin>>a>>b>>s;
    int i=0,j=a+b-1;
    if(a&1&&b&1){
        cout<<-1<<endl;
    }
    map<char,int> m;
    vi v;
m['0']=a-count(all(s),'0');
m['1']=b-count(all(s),'1');
    while(i<=j){
        if(s[i]==s[j]&&s[i]!='?'){
            i++;
            j--;
            continue;
        }
        if(s[i]=='?'&&s[j]=='?'){
            if(i==j){
            if(m['0']&1){
                m['0']--;
                s[i]='0';
            }
            else if(m['1']&1){
                m['1']--;
                s[i]='1';
            }
            else{
                cout<<-1<<endl;
                return;
            }
            i++;
            j--;
            continue;
        }
         v.push_back(i);
           i++;
           j--;
        }
        if(s[i]=='?'||s[j]=='?'){
 if(s[i]=='?'){
                s[i]=s[j];
                m[s[j]]--;
            }
            else{
                s[j]=s[i];
                m[s[i]]--;
            }
            if(m['0']==-1||m['1']==-1){
                cout<<-1<<endl;
                return;
            }
            i++;
            j--;
            continue;
        }
        cout<<-1<<endl;
        return;
    }   
    if(!m['0']%2==0){
        cout<<-1<<endl;
        return;
    } 
    if(!m['1']%2==0){
        cout<<-1<<endl;
        return;
    } 
    for (int x:v){
        if(m['0']!=0){
            s[x]='0';
            s[a+b-x-1]='0';
            if(m['0']<0){
                cout<<-1<<endl;
                return;
            }
        }
        else{
            s[x]='1';
            s[a+b-x-1]='1';
            if(m['1']<0){
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<s<<endl;

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