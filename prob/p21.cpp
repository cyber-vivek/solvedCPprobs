#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a,b,k;
    cin>>t;
    while(t--){
         int count =0;
        cin>>a>>b;
        while(a!=0||b!=0){
            if(a==b){
                count++;
                break;
            }
            k=ceil((abs(a-b))/(1.0*min(a,b)));
            if(a>b)a-=k*b;
            else b-=k*a;
                   count+=k;
                //    cout<<"count "<<count<<endl;
                // cout<<k<<a<<b;
                   
    }
    cout<<count<<endl;
    }
    return 0;
}