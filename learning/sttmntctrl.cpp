#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int j =(1,2,3,4,5,6);
    float k =4.5;
    cout<<j<<endl;
    cout<<typeid(k).name()<<endl;
    // // loops- do-while,while
    // for (int i = 0,j=0; i<10,j<50; i++,j++)
    // {
    //     cout<<"netsh wlan ";
    // }
    if(typeid(k).name()==typeid(float).name())
    cout<<"true"<<endl;

    // Switch Case
    int x = 2;
    switch (x) {
       case 1:
       cout << "x is 1";
       break;
       case 2:
       cout << "x is 2";
       break;
       default:
       cout << "value of x unknown";
    }

    switch (x) {
 case 1:
 case 2:
 case 3:
 cout<<"x is 1,2 or 3"<<endl;
 break;
 default:
 cout<<"x is not 1,2 or 3";}
    return 0;
    
}