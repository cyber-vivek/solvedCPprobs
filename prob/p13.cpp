#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<((k%n==0)?n:k%n)<<endl;;
            continue;
        }
        if(k<(n/2)+1){
            cout<<k<<endl;
            continue;
        }
        int x=k-((n/2)+1);
       int res=((k+(n%2*(x/(n/2))))%n)+1;
       cout<<((res==0)?n:res)<<endl;
           }
    return 0;
}