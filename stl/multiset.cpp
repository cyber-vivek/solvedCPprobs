// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide 
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing multiset object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.


#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

// int main(){
// // multiset<int> ms = {5,8,32,4,6,3,4};
// // for order of sorting

// multiset<int,greater<int>> ms = {5,8,32,4,6,3,4};
// ms.insert(6);
// for(auto const & x:ms){
//     cout<<x<<endl;
// }

//    return 0; 
// }

// with user difined datatype

class person{
    public:
    float age;
    string name;
    bool operator < (const person&rhs) const {return age<rhs.age;}
    bool operator > (const person&rhs) const {return age>rhs.age;}

};

int main(){
    multiset<person,greater<person>> ms = {{25,"Ramesh"},{24,"Nitesh"}};
    for(const auto &x:ms){
        cout<<x.age<<" "<<x.name<<endl;
    }
    return 0;
}
