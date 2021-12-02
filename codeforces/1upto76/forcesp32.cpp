#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a%c==0&&b%c==0){
        cout<<(a/c)*(b/c);
    }
    else if(a%c==0||b%c==0){
        if(a%c==0){
            cout<<(a/c)*(b/c)+a/c;
        }
        else{
            cout<<(b/c)*(a/c)+b/c;
        }
    }
    else{
        long long k=(a/c)*(b/c)+ceil((a+b-1)/double(c));
        cout<<k;
    }
    return 0;
}