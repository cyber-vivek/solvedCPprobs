#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n>>k;
        int r=0,ts=0,b=0,tv;
        for(int i=0;i<n;i++){
            cin>>tv;
            if(tv==-1){
            r++;
            continue;}
            if(tv>k){
                ts++;
                continue;
            }
            if(tv<=1){
                b++;
            }
        }
        if((n-r)<ceil(float(n)/2)){
            cout<<"Rejected"<<endl;
        }
        else if(ts!=0){
            cout<<"Too Slow"<<endl;
        }
        else if(b==n){
            cout<<"Bot"<<endl;
        }
        else{
            cout<<"Accepted"<<endl;
        }
    }
    return 0;
}