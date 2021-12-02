#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,i;
        cin>>n;
        long long int x,rem=0;
        for ( i=0;i<n;i++){
            cin>>x;
            if(x+rem>=i){
            rem=rem+x-i;
            }

            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==n) cout<<"YES"<<endl;
    }
    return 0;
}