#include<iostream>
#include<vector>
#include<algorithm>
#define pb push_back
using namespace std;

int main(){
    vector<int> vec={44,99,11,55,5,8,8};
    cout<<vec[2];
    vec.pb(8);
    sort(vec.begin(),vec.end());//O(NlogN)

    bool p=binary_search(vec.begin(),vec.end(),5);
    cout<<vec[0]<<endl<<vec.size()<<endl;

    vector<int>::iterator it,it1,it2;
    it = lower_bound(vec.begin(),vec.end(),1000);
    cout<<*it;
    vec.insert(it,100);
    cout<<vec[8]<<endl<<vec.size();
    cout<<it-vec.begin()<<endl;
    // vec.insert(it+9,4);
    // cout<<vec.size();
    // cout<<vec[9]<<vec[17];
    it1 =lower_bound(vec.begin(),vec.end(),8);
    it2=upper_bound(vec.begin(),vec.end(),8);
    cout<<"8 occurs "<<it2-it1<<" times"<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }



    //HOW TO SORT A VECTOR IN DESCENDING ORDER


    // string s= "man";
    // string g="nam";
    // cout<<is_permutation(s.begin(),s.end(),g.begin());

    return 0;
}