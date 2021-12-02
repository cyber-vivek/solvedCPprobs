#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string s1 ="0123456789";
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        if (n==1){
        cout<<9<<endl;
        continue;}

        if(n==2){
        cout<<98<<endl;
        continue;}
        if(n==3){
        cout<<989<<endl;
        continue;}
        cout<<989;
        for(int j = 0;j<((n-3)/10);j++)
        cout<<s1;
        for(int k = 0;k<((n-3)%10);k++)
        cout<<s1[k];
        cout<<endl;
    }
    return 0;
}