// 1. Multimap is an associative container that contains a sorted list of key-value pairs, 
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted order on the basis of key (assending/decending).
// 3. Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound
// 5. We dont have at() and [] functions to get element like we had in std::map.


#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<functional>

using namespace std;

int main(){
    multimap<char,int> mm;
    mm.insert(make_pair('a',1));
    mm.insert(make_pair('a',1));
    mm.insert(make_pair('a',3));
    mm.insert(make_pair('b',5));
    mm.insert(make_pair('b',4));

    // Iterate over map
    for(auto & x:mm){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    // Get all the pairs of given key
    auto range = mm.equal_range('a');
    // If we do not use auto
    // pair<multimap<char,int>::iterator,multimap<char,int>::iterator> range = mm.equal_range('a');
    for(auto it =range.first;it!=range.second;it++){
        cout<<it->first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
   auto it= mm.find('b');
   cout<<it->first<<" "<<it->second<<endl;

   cout<<endl;

   auto it1 = mm.lower_bound('a');
   cout<<it1->first<<" "<<it1->second<<endl;

    cout<<endl;

   auto it2 = mm.upper_bound('a');
   cout<<it2->first<<" "<<it2->second;
    return 0;
}