#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node * head;
void insert(int data,int n){
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
    if (n==1){
        temp->next=head;
        head = temp;
        return;

    }
    node * temp1 =head;
    for (int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void print(){
    node * temp =head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    head = NULL;
    insert(4,1);
    insert(2,2);
    insert(3,3);
    insert(8,1);
    insert(6,2);
    insert(9,3);
    print();
    return 0;
}