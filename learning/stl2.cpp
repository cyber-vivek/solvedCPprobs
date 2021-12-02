#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(8);
    s.insert(-5);
    s.insert(1);
    s.insert(20);

    for(int k:s)
    cout<<k<<endl;
    auto it =s.find(20);
    cout<<*it; 
    
    // auto i=s.begin();
    // auto y =s.end();
    // cout<<*i<<*y<<*(s.end());

    
    cout<<endl<<(s.end()==it);
    return 0;
}