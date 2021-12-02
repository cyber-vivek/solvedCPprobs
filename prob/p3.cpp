#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int r[n];
        for(int &x:r)
        cin>>x;
        cin>>m;
        int b[m];
        for (int &x:b)
        cin>>x;
        int topr=0,topb=0;
        int sum=0,max=0;
        while((topr!=n-1)&&(topb!=m-1)){
            if(r[topr]>b[topb]){
                sum=sum+r[topr];
                topr++;
            }
            else{
                sum=sum+b[topb];
                topb++;
            }
            if(max<sum)
            max=sum;
        }
        cout<<max<<endl;
    }

    return 0;
}