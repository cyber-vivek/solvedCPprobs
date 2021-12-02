#include<iostream>
using namespace std;
#include<cmath>
int main(){
   long long int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        long long int a,s=0,incre=0,r;
        cin>>a;
        s=a;
        for (int j=1;j<n;j++){
            cin>>a;
            if((double(a)/double(s))<=(double(k)/100)){
                s=s+a;
            }
            else{
                r=ceil(float((100*a)-(k*s))/k);
                incre=incre+r;
                s=s+a;
                s=s+r;

        }
    }
    cout<<incre<<endl;
    }
    
    return 0;
}