//insertion at begining

#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node * head= NULL;

void insert(int x){
    node* temp = new node;
    temp->data= x;
    temp->next= head;
    head =temp;
}
void print(){
    node* t =head;
    cout<<"The list is: ";
    while( t!=NULL){
        cout<<t->data<<" ";
        t =t->next;}
        cout<<endl;
}
int main(){
    int n,x;
    cout<<"How many numbers do you want to print?";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter number: ";
        cin>>x;
        insert(x);
        print();
    }
    return 0;
}