#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int a,s=0,incre=0,r;
        cin>>a;
        s=a;
        for (int j=1;j<n;j++){
            cin>>a;
            if((double(a)/double(s))<=(double(k)/100)){
                s=s+a;
            }
            else{
                r=ceil(float((100*a)-(k*s))/k);
                if(double(a)/double(s+r-1)<=double(k)/100)
                r=r-1;
                incre=incre+r;
                s=s+a;
                s=s+r;

        }
    }
    cout<<incre<<endl;
    }
    
    return 0;
}