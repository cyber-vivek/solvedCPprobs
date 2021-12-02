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
 bool ispalindrome(string s){
        int n = s.size();
        for(int i = 0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
                continue;
            }
            else return false;
        }
        return true;
    }
    long long int countStrings(string s){
        // Your code goes here
        int n = s.size();
        long long ans = 1;
        int l = 1;
        while(l<n){
            for(int i =0;i<l;i++){
                if(ispalindrome(s.substr(i,l-i+1))){
                    break;
                }
                else{
                    cout<<i<<" "<<l<<endl;
                    ans++;
                }
            }
                l++;
        }
        return ans;
    }
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin>>s;
    cout<<countStrings(s);
    return 0;
}