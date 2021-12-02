#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
int main() 
{
	ll t;
	cin>>t;
	while(t--){
	    ll n; cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    vector<ll>v(n);
	    if(n==1)cout<<"1\n";
	    else{
	        v[1]=a[1]-a[0];
	        for(ll i=2;i<n;i++)v[i]=min(a[i]-a[i-1],v[i-1]);
	        ll i=n-1;
	        while(i>0){
	            if(a[i]>v[i])i--;
	            else break;
	        }
	        cout<<i+1<<"\n";
	    }
	    
	}
	return 0;
}