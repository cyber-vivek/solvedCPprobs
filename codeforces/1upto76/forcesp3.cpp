#include<iostream>
#include<algorithm>
using namespace std;
    int pre=0;
void fun(char c){
    int k = (int)c-48;
    if (k+1==pre){
        cout<<0;
        pre = k;
    }
    else {
        cout<<1;
        pre =k+1;
    }
}

int main(){
    int t,n,b;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        string b,a;
        cin>>b;
        for_each(b.begin(),b.end(),fun);
        cout<<endl;
        pre=0;
    }
    return 0;
}