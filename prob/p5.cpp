#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int v,n,m,min=INT_MAX,neg=0,sum=0;
        cin>>n>>m;
        bool zp=false;
        for(int i=0;i<(n*m);i++){
            cin>>v;
             sum=sum+abs(v);
             if(zp==false){
          if(min>abs(v))
          min=abs(v);
                 if(v<0)
                 neg++;
             }
           if(v==0){
            zp=true;
            }
        }
        if(zp==true)
        cout<<sum<<endl;
        else{
            if(neg%2==0)
            cout<<sum<<endl;
            else
            cout<<(sum-2*min)<<endl;
        }
    }
}