#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node* head;

node* insert(node*p,int x){
    if(p==NULL){
        p=new node;
        p->data=x;
        p->next=NULL;
        return p;
    }
    node* t=head;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=new node;
    t->next->data=x;
    t->next->next=NULL;
    return p;
}
void print (node* p){
    if(p!=NULL){
    cout<<p->data<<" ";
    print(p->next);}
}
void printrev(node* p){
    if(p!=NULL){
        printrev(p->next);
        cout<<p->data<<" ";
    }
}
int  main(){
     head=NULL;
     head =insert(head,8);
     head =insert(head,5);
     head =insert(head,10);
     head =insert(head,1);
     head =insert(head,3);
     head =insert(head,7);
     cout<<"The list is: ";
     print(head);
     cout<<endl;
     cout<<"The list in reverse is: ";
     printrev(head);
     cout<<endl;
     return 0;
}