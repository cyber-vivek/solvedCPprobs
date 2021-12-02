#include<iostream>
using namespace std;
int main(){
    // Initilization of varible
    int a =4;
    int b(4);
    // int c{8};
    cout<<a+b;
    // ALSO
    auto d =a; //it has the same datatype as a(which is assigned)
    // if we donot want to initialize then decltype can be used
    decltype(a) e;
    e =8;
    cout<<a<<e;
    // here it is throwing error, it is not supported by this compiler  
}