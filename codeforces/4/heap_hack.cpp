#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    multiset<int> ms;
    for(int i =0;i<q;i++){
        int qt,v;
        cin>>qt;
        if(qt==1){
            cin>>v;
            ms.insert(v);
        }
        else if(qt==2){
            cin>>v;
            ms.erase(ms.find(v));
        }
        else{
            cout<<*ms.begin()<<endl;
        }
    }
    
    
    return 0;
}
