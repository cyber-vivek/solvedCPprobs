#include<iostream>
using namespace std;
int passbyval(int a,int b){
    return a+b;
}
void passbyref(int &a,int &b){
    a=8;
    b=9;
    cout<<a<<b<<a+b;
}
string func(const string &a,const string &b){
    return a+b;
}
inline int func1(int d);//declaring function
int main(){
    // pass by value 
    int x=4,y=5;
    cout<<(x,y);
    cout<<x,y;
    // pass by reference
    cout<<passbyval(x,y);
    passbyref(x,y);
    cout<<y<<x<<endl;

    // pass by reference does not involve copying so in case of strings where data size is large it can be used
    // and if no modification is needed then const keyword can be used
    cout<<func("keep ","learning");

    cout<<func1(8);
    return 0;
}
inline int func1(int d){
    return d*d*d;
}