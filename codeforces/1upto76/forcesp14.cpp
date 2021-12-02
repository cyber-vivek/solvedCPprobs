#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,n;
        cin>>A>>B>>n;
        vector<int> v;
        v.reserve(n);
        int b[n],j,i;
        for (i=0;i<n;i++){
            cin>>j;
            v.push_back(j);
        }
        for ( i=0;i<n;i++){
            cin>>b[i];
             int k=floor((b[i]/A));
                 B=B-k*v[i];
            if(B<=0){
                cout<<"NO"<<endl;
                break;}
                if(A*k==b[i])
                v.erase(v.begin()+i);
        }
        if(i==n){
            sort(v.begin(),v.end());
            for (auto it=v.begin();it<v.end();it++){
                B=B-*it;
                if(B<=0){
                    if(it==v.end()-1){
                        cout<<"YES"<<endl;
                        break;
                    }
                    else{
                    cout<<"NO"<<endl;
                    break;}
                }

            }
        }
        if(B>0)
        cout<<"YES"<<endl;
        
    }
    printf("vivek");
    return 0;
}