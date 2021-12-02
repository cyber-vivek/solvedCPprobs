#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        int n,s=0,e=0,o=0;
        cin>>n;
        int a[n];
        for( int j=0;j<n;j++){
            cin>>a[j];
            s=s+a[j];
            if (a[j]==2)
            e++;
            else
            o++;
            
        }
        if (s%2==0){
            if (o==0){
                if (e%2==0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
                break;
            }
            if (o%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}