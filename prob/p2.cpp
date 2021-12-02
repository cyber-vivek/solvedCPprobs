#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int score =0,sc[n];
        for(int i=n-1;i>=0;i--){
            if(a[i]+i>=n){
                sc[i]=a[i];
            }
            else
            sc[i]=a[i]+sc[i+a[i]];
            if(sc[i]>score)
            score=sc[i];
        }
        cout<<score<<endl;
    }
}