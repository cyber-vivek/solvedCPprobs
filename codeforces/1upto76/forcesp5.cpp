#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        int k=n/2020;
        if((n-(2020*k))<=k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}