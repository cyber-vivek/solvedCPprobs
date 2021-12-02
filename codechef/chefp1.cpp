#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i <t;i++){
        int n,k,d,s=0;
        cin>>n>>k>>d;
        for(int j=0;j<n;j++){
            int p;
            cin>>p;
            s=s+p;
        }
       int nd=s/k;
       if(nd>d)
       cout<<d<<endl;
       else
       {
           cout<<nd<<endl;
       }
       
    }
    return 0;
}