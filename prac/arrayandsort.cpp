#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr ={4,8,3,1,55,6,4,66,7};
    string s="programming";
    sort(s.begin(),s.end());
    sort(arr.begin(),arr.end());
    cout<<s;
    for(auto &x:arr) cout<<x;
    return 0;
}