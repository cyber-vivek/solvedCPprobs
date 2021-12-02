#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n>>k;
        if(n%k==0){
        cout<<1<<endl;
        continue;
        }
        if(n==1){
        cout<<k<<endl;
        continue;
        }
        if(n>k){
            cout<<2<<endl;
            continue;
        }
        if(k%n==0){
            cout<<k/n<<endl;
            continue;
        }
        cout<<(k/n)+1<<endl;

    }
    return 0;
}