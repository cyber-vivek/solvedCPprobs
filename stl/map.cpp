

// std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.

#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<string,long long int> m;
    m["vivek"]=8303511211;
    m["vinay"]=7651962267;
    m["mummy"]=9452889080;
    m["papa"]=6450217678;
    m.insert(make_pair("unknon",100000000));
    cout<<m["vinay"]<<endl;
    cout<<m["v"]<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    m.erase("v");
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    map<string,vector<int>> m1;
    m1["num1"].push_back(100);
    m1["num1"].push_back(200);
    m1["num2"].push_back(5000);
    m1["num2"].push_back(88000);
    m1["num2"].push_back(880010);
    for (auto x:m1){
        cout<<x.first<<" ";
        for (int v:x.second){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}