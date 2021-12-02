#include<iostream>
using namespace std;
bool isPrime(int n) 
{ 
    if (n <= 1) {
        return false;} 
    if (n <= 3) {
        return true;} 
    if (n % 2 == 0 || n % 3 == 0){ 
        return false; }
  
    for (long long int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; }
    }
    return true; 
}
int main(){
    long long int x;
    cin>>x;
    if(isPrime(x)){
        cout<<x;
        return 0;
    }
    long long int res=1;
    if(x%2==0){
        res=res*2;
        while(x%2==0){ x=x/2;
        if(isPrime(x)&&x!=2){
            res=res*x;
            cout<<res;
            return 0;
        }}}
    if(x%3==0){
        res=res*3;
        while(x%3==0){ x=x/3;
        if(isPrime(x)&&x!=3){
            res=res*x;
            cout<<res;
            return 0;
        }}
    }
    for (long long int i=5;i<x;i+6){
        if(isPrime(i)){
            if(x%i==0){
                res=res*i;
                while(x%i==0){ x=x/i;
                if(isPrime(x)&&x!=i){
                    res=res*x;
                    cout<<res;
                    return 0;
                }}
            }
        }
    }
    return 0;
}