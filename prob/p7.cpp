#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,op1=0,min,op;
        cin>>a>>b;
        int v=a;
        int j=(b==1)?1:0;
        if(b==1){
            b++;
            op1++;
        }
        while(v!=0){
            v=v/b;
            op1++;
        }
        min=op1;
        for (int i=b+1;(i<a)&&(i<(b+op1));i++){
            // cout<<min;
            op=i-b+j;
            // cout<<op;
            v=a;
              while(v!=0){
            v=v/i;
            op++;
        }
        if(min>op)min=op;
        }
        cout<<min<<endl;
    }
    return 0;
}