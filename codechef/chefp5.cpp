#include<iostream>
using namespace std;

int main(){
    int t=5;
    cin>>t;
    while(t>0){
        int x,y,z;
        cin>>x>>y>>z;
        if ((x+y-z==0)||(x-y+z==0)||(y-x+z==0)){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        t--;
    }
    return 0;
}