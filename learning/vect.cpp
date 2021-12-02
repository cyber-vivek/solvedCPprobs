#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a={3,2,1};
    vector<vector<int>> v={{0,1}};
    int k=1;
    // for (int i=0;i<v.size();i++){
    //     sort((a.begin()+v[i][0]),(a.begin()+v[i][1]));
// }
    // cout<<a[k]<<v[0][0]<<v.size();
    /*
     * Write your code here.
     */
    cout<<a[1];
    auto it = a.begin()+2;
    cout<<*it;
sort(a.begin(),it);
cout<<a[0];


    return 0;
}