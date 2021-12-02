#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<9%4<<-10%4<<11%-4<<-13%-4;
    int m =4==4?5:6;
    cout<<m<<endl;
    // relational andcomparison operators
    //  ==, !=, <, >, <=, >=

    // Bitwise Operators
    // &-And 
    // |-Or
    // ^-Xor      "true f either one is true and false if both are true or false"
    // ~-Not opeartor
    // << - left shift
    // >> - right shift

    // Typecasting Operator
    float f =3.1415;
    cout<<(int)f<<int(f)<<endl;
    // Both ways of casting types are valid in C++.

    // Sizeof operator
    cout<<sizeof(char)<<endl;
    int a=4,b=4555,c=45546;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

    return 0;
}
