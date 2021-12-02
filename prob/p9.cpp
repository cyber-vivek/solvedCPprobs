#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b){
    if(a<b){
        if(ceil(float(b)/a)<=2)
        return 0;
        else
        return 1+solve(2*a,b);
    }
    else{
        if(ceil(float(a)/b)<=2)
        return 0; 
        else 
        return 1+solve(ceil(a/2.0),b);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num=0;
        cin>>n;
        int a[n];
        for (int &x:a)
        cin>>x;
        for (int i=0;i<n-1;i++){
           num += solve(a[i],a[i+1]);
        }
        cout<<num<<endl;
    }
    return 0;
}