#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int k=sqrt(x);
        bool eq=false;
        if(x<4){
            (x==1)?(cout<<1<<endl):((x==2)?(cout<<3<<endl):cout<<2<<endl);
            continue;
        }
        for(int i=k;i<x;i++){
            if((i*(i+1))/2>=x){
            if(i*(i+1)/2==x){
                eq=true;
                k=i-1;
                break;
            }
            else{
                k=i-1;
                break;
            }
            }
        }
        if(eq==true){
            cout<<k<<endl;
        }
        else{
            int u=((k+1)*(k+2)/2),l=(k*(k+1)/2);
            int m=l+ ceil((u-l)/2);
            if(x<=m){
                cout<<k+(x-l)<<endl;
            }
            else
            cout<<k+1+(u-x)<<endl;
        }
    }
}