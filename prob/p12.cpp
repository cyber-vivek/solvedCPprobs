#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
       ll int j=pow(n,0.34),i=1;
       while(i<=j){
           if(pow(i,3)+pow(j,3)==n){
               cout<<"YES"<<endl;
               break;
           }
           if(pow(i,3)+pow(j,3)<n)i++;
           else
           j--;
       }
    if(j<i){
        cout<<"NO"<<endl;
    }
    }
    return 0;
}