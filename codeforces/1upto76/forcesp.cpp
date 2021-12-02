#include<iostream>
using namespace std;

int main(){
    int t;
    long long int n;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
            if(n%2!=0){
                cout<<"YES"<<endl;
        }
        else{
            n=n/2;
            while(n%2==0){
                n=n/2;
            }
            if(n==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}