// 1. All the containers supports insert and emplace operation to store data. 
// 2. Emplace is used to construct object in-place and avoids unnecessary copy of objects.
// 3. Insert and Emplace is equal for premetive data types but when we deal with heavy objects

#include<iostream>
#include<set>

using namespace std;

class A{
    public:
    int x;
    A(int x=0):x{x} {cout<<"construct"<<endl;};
    A(const A& rhs) {x=rhs.x;cout<<"copy"<<endl;}
};
bool operator < (const A& lhs, const A& rhs) {return lhs.x<rhs.x;}

int main(){
    set<A> s;
    // A a(10);
    // s.insert(a);
    // s.insert(A(10));
    s.emplace(10);
}