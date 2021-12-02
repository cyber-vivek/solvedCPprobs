#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int k,n,pos;
        cin>>n>>k;
        int a[n];
        for (int j=0;j<n;j++){
            cin>>a[j];
        }
        int j=0;
        while(j<(n-1)){
            if(a[j]>=a[j+1]){
                 j++;
                continue;
            }
            else{
                a[j]++;
                k--;
                 if(k<=0){
                pos=j+1;
                break;
            }
            if(j==0){
                continue;
            }
                if(a[j]>a[j-1]){
                    j=j-1;
                    continue;
                }
            }
        }
        if(k>0){
            cout<<-1<<endl;
        }
        else
        cout<<pos<<endl;
    }
    return 0;
}