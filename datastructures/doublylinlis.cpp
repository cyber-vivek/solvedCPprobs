#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node*prev;
};
node* head;
void InsertAtEnd(int x){
    if(head==NULL){
        head= new node;
        head->data=x;
        head->next=NULL;
        head->prev=NULL;    
        return;
    }
    node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=new node;
    p->next->data=x;
    p->next->prev=p;
    p->next->next=NULL;
}
void InsertAtHead(int x){
    if(head==NULL){
        head=new node;
        head->next=NULL;
        head->prev=NULL;
        return;
    }
    node *p=new node;
    p->data=x;
    p->next=head;
    p->prev=NULL;
    head->prev=p;
    head=p;
}
void print(){
    node* p=head;
    cout<<"The list is: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void reverseprint(){
    node*p=head;
    if(p==NULL) return;
    while(p->next!=NULL)
    p=p->next;
    cout<<"The list in reverse order is: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->prev;
    }
    cout<<endl;
}
int main(){
    head=NULL;
    InsertAtEnd(4);
    InsertAtHead(6);
    InsertAtEnd(10);
    InsertAtHead(50);
    InsertAtEnd(1);
    print();
    reverseprint();
    return 0;
}