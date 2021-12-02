#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(char);
    // int a,b;
    // cin>>a;
    // cin>>b;
    // int c = a+b;
    // cout<<c;
    cout<<sizeof(int);
    cout<<sizeof(char)<<endl;
    int a[]={1,5,6};
    cout<<&a[0]<<&a[1]<<&a[1]-&a[0];

    return 0;
    }