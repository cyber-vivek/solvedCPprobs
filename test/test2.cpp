#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(b==0)
    return a;
    return hcf(b,a%b);
}
int main(){
    long long x =999999999999;
    cout<<x+1;

    int a,b;
    cout<<"This is a program to find LCM and HCF of two numbers"<<endl;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    int h=hcf(a,b);
    cout<<"LCM of numbers is "<<a*b/h<<endl<<"And HCF is "<<h;
    char c='1';
    cout<<(int)c;
    return 0;
}