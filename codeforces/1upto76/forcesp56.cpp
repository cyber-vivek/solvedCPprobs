#include <bits/stdc++.h>
using namespace std;

#define M (ll)1000000007
#define pi 3.1415926536
#define all(a) a.begin(),a.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define flp(i,x,y) for( int i=x;i<y;i++)
#define flpl(i,x,y) for(long long int i=x;i<y;i++)
#define forp(i,x,y) for(long long int i=x;i*i<=y;i++)
#define ll long long int 	
#define MOD (long long int)(998244353)
#define pb push_back
#define lop(i,n) for(ll i=0;i<n;i++)
#define lop1(i,n) for(ll i=1;i<=n;i++)
#define lopr(i,n) for(ll i=n-1;i>=0;i--)
#define fr         first
#define sc         second
#define pii        pair<int,int>
#define len(s)     s.length()
#define meme(a,val) memset(a,val,sizeof(a));
#define sz(v) v.size()
#define endl "\n"
#define inf 1e18
#define pai pair<int,int>
#define itr vector<int> :: iterator
map<ll,ll> m;
map<pair<ll,ll>,ll> don;
	int main()
	{ 
		fastio
		 ll T;
		 int i,j;
	//long	double ar;
	T=1;
			 
	//cin>>T;
		bool res=false;

	//	ctr=1		//int c=1;
		int ot=1;
		while(T--)
		{
			ll n,k;
			cin>>n;
			ll a[n];
			ll cnt=1,st=1;
			flpl(i,1,n) a[i]=1;
			flpl(i,2,n)
			{
				if(a[i]==0) continue;
				else if(n%i==0)
				{
					a[i]=0;
					ll ind=2;
					while(i*ind<n)
					{
						a[i*ind]=0;
						ind++;
					}
				}
				else
				{
					cnt++;
					st=(i*st)%n;
				}
			}
			if(st!=1)
			{
				a[st]=0;
				cnt--;
			}
			cout<<cnt<<endl;
			flpl(i,1,n) 
			{
				if(a[i]==1) cout<<i<<" ";
			}
			cout<<endl;

        }
		return 0;
			} 