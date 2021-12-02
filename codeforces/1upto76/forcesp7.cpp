#include<iostream>
using namespace std;
int d;
bool islucky(int x){
        if(x%10==d)
        return true;
        else
        return false;
    
}
int main(){
    int t,q,r=0;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>q>>d;
        int n;
        for (int i=0;i<q;i++){
            cin>>n;
            if(n>=10*d){
                cout<<"YES"<<endl;
                continue;
            }
            while(n>=d){
                if(islucky(n)){
                    cout<<"YES"<<endl;
                    r=1;
                    break;
                }
                n=n-d;
            }
            if(r==1){
                r=0;
                continue;
            }
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}