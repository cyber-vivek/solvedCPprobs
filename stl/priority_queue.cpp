// 0. std::priority_queue is a container adaptor that provides constant time lookup of the 
//    largest OR smallest element.
// 1. By default std::vector is the container used inside.
// 2. Cost of insertion and extraction is logarithmic.
// 3. std::priority_queue is implemented using std::make_heap, std::push_heap, std::pop_heap functions.

#include<iostream>
#include<queue>
#include<vector>
#include<iostream>

using namespace std;
template<typename T> void print_queue(T &q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}


int main(){
    int val[] = {5,8,3,96,1,6,2,63,4};
    priority_queue<int> pq;
    for(int e:val ) pq.push(e);
    cout<<"Max Heap"<<endl;
    print_queue(pq);

    priority_queue<int,vector<int>,greater<int>> pq2;
    for(int e:val)pq2.push(e);
    cout<<"Min Heap"<<endl;
    print_queue(pq2);

    auto cmp = [](int left,int right){
        return left<right;
    };
    priority_queue<int,vector<int>,decltype(cmp)> q3(cmp);
    for(auto e:val)q3.push(e);
    cout<<"Max Heap Using Comparator Function"<<endl;
    print_queue(q3);
    // print_queue(q3);
}