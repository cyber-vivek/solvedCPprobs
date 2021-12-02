#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t,n,d,f;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n>>d;
        vector<int> v;
        for (int j=0;j<n;j++){
            cin>>f;
            v.push_back(f);
        }
        sort(v.begin(),v.end());
        if(*(v.end()-1)<=d){
            cout<<"YES"<<endl;
        }
        else
        {
            if(v[0]+v[1]<=d)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    return 0;
}