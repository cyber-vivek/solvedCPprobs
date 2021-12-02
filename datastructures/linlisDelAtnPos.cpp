    #include<iostream>
    using namespace std;
    struct node
    {
        int data;
        node * next; 
    };
    node * head;
    void insert(int x){
        if (head ==NULL){
            head =new node;
            head->data=x;
            head->next=NULL;
            return;
        }
        node *temp;
        temp =head;
        while(temp->next!=NULL){
            temp =temp->next;
        }
        temp->next =new node;
        (temp->next)->data=x;
        (temp->next)->next=NULL;
    }
    void print(){
        node* temp =head;
        cout <<"The list now is"<<endl;
        while(temp!= NULL){
            cout<<temp->data;
            temp=temp->next;
            cout<<endl;
        }
    }
    void deletel(int n){
        node * temp=head;
        if (n==1){
            head = temp->next;
            delete temp;
            return;
        } 
        for(int i=1;i<n-1;i++){
            temp=temp->next;
        }
        node *temp1=temp->next;
        temp->next=temp1->next;
        delete temp1;
    }
    int main(){
        head=NULL;
        cout<<"How many numbers do you want in the list? ";
        int jk,t;
        cin>>jk;
        for (int i=0;i<jk;i++){
            cout<<"Enter Number: ";
            cin>>t;
            insert(t);
            print();
        }   
        cout <<"Enter the position of number which you want to delete? ";
        cin>>t;
        deletel(t);
        print();
        return 0;
    }