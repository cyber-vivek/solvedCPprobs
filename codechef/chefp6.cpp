#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        int tv,o=0,e=0;
        for(int i=0;i<n;i++){
            cin>>tv;
            if(tv%2==0){
                e++;
            }
            else
            o++;
        }
        if(e>o){
            cout<<(n-e)<<endl;
        }
        else
        cout<<(n-o)<<endl;
    }
    return 0;
}