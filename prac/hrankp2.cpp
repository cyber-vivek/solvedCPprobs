#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    v.reserve(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        double d;
        v.push_back(x);
        sort(v.begin(),v.begin()+i);
        if(i%2==0){
         d=*(v.begin()+(i/2));
        }
        else {
        d =float((*(v.begin()+(i/2))+*(v.begin()+(i/2)+1)))/2.0;
        }
          cout<<fixed<<setprecision(1)<<d<<endl;

    }
    return 0;
}