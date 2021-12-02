#include<bits/stdc++.h>
using namespace std;
int hcf( int a,  int b){
    if(b==0){
        return a;
    }
    return hcf(b, a%b);
}
int main(){
    cout<<hcf(3,2);
    cout<<hcf(2,3);
    return 0;
}