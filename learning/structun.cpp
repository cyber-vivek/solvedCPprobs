#include<iostream>
using namespace std;

typedef struct detail{
    string name;
    int age;
}dt;
int main(){

    enum fruit{apple=1,orange,mango,banana};
    fruit f1 =mango;
    cout<<f1;
    struct detail n1;
    n1.name= "vivek";
    n1.age=20;
    dt n2;
    n2.name="name";
    n2.age=25;
    cout<<n1.name;
    return 0;
}
