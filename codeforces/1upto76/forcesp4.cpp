#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(b==0)
    return a;
    return hcf(b,a%b);
    }

int main(){
    int t,d;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>d;
        int a=(1+d),b =(1+2*d);
        for(int j= 2;j<a/2;j++){
            if (a%j==0){
                a++;
                j=1;
                continue;}
            }
        for(int j= 2;j<b/2;j++){
            if (a%j==0){
                b++;
                j=1;
                continue;
            }
        }
        int lcm =a*b/hcf(a,b);
        cout<<lcm<<endl;}
    
    return 0;
}