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
  
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; }
    }
    return true; 
}
int l;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int tr=0;
        for (int j =2;j<=n/2;j++){
           int temp =j;
            for (int k=j+1;k<=n;k++){
                if((j+k)<=n){
                    if(isPrime(k)){
                        j=(temp==j)?(k-1):j;
                    if(isPrime(j+k))
                    tr++;
                }}
                else
                l=k;
                break;
             }
             if(l==j+1)
             break;
        }
        cout<<tr<<endl;
    }
    return 0;
}