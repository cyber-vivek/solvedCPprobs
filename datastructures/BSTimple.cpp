#include<iostream>
#include<queue> 
using namespace std;
struct bstnode{
    int data;
    bstnode* left;
    bstnode *right;
};
bstnode* getnewnode(int data){
    bstnode* p=new bstnode;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
bstnode* insert(bstnode * root,int data){
    if(root==NULL){
        root=getnewnode(data); 
        return root;
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else root->right=insert(root->right,data) ;
    return root;
}
bool search(bstnode * root,int data){
    if (root==NULL) return false;
    else if (root->data==data) return true;
    else if(data<=root->data) return search(root->left,data);
    else return search(root->right,data);
}
int findmini(bstnode * root){
    if(root == NULL){
        cout<<"Error: Tree is empty \n";
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int findminr(bstnode * root){
    if(root==NULL){
        cout<<"Error: Tree is empty \n";
        return -1;
    }
    else if (root->left==NULL){
        return root->data;
    }
    return findminr(root->left);
}
int findmaxi(bstnode * root){
    if (root == NULL){
        cout<<"Error: Tree is empty \n";
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
int findmaxr(bstnode * root){
    if (root == NULL){
        cout<<"Error: Tree is empty \n";
        return -1;
    }
    if (root->right==NULL) return root->data;
    return findmaxr(root->right);
}
int findheight(bstnode * root){  // Binary Tree
    if (root ==NULL){
        return -1;
    }
    return max(findheight(root->left),findheight(root->right))+1;

}
void levelorder(bstnode * root){    // BFS-Breadth First Search    // Time complexity O(n)   
    queue<bstnode *> q;            // Space complexity - Best Case O(1), Worst Case O(n) Average Case O(n)   
    q.push(root);
    while(!q.empty()){
        bstnode * cur =q.front();
        cout<<cur->data<<" ";
        if (cur->left!=NULL) q.push(cur->left);
        if (cur->right!=NULL) q.push(cur->right);
        q.pop();
    }
    cout<<endl;
}
void preorder(bstnode * root){
    if (root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder( bstnode * root){
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder (bstnode * root){
    if (root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// Time Complexity O(n)    Space Complexity O(h)
// Worst O(n)     Best/Average O(log n);

bool isbstutil(bstnode * root,int max,int min){
    if(root==NULL) return true;
    if(root->data<max&&root->data>min&&isbstutil(root->left,root->data,min)&&isbstutil(root->right,max,root->data)){
        return true;
    }
    return false;
}
bool isbinarysearchtree(bstnode * root){
   return isbstutil(root,INT_MAX,INT_MIN);
}
bstnode * afindmin(bstnode * root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

bstnode * Delete(bstnode * root,int data){
    if (root ==NULL) return root;
    if(data<root->data) root->left=Delete(root->left,data);
    else if (data > root->data) root->right=Delete(root->right,data);
    else{
        // Woo hoo!! I found you, get ready to be deleted
        if(root->left==NULL&&root->right==NULL){  //Case 1: No child
            delete root ;
            root=NULL;
        }
        else if(root->left==NULL||root->right==NULL){ // Case 2: One child
        bstnode * t=root;
        if (root->right==NULL) root =root->left;
        else root =root->right;
        delete t;
        }
        else{
            bstnode * t= afindmin(root->right);
            root->data=t->data;
            root->right=Delete(root->right,t->data);
        }
    }
    return root;
}
bstnode * find(bstnode * root, int data){

    if( root->data < data) return find(root->right,data);
    else if(data <root->data) return find( root->left, data);
    else return root;
}

int inordersuccessor(bstnode * root, int data){
    if (root==NULL) return INT_MIN;
    bstnode * t= find(root, data);
    if(t->right!=NULL){             //Case 1: Node has right subtree 
        return findmini(t->right);
    }
    else {                             // Case2: No right subtree
    bstnode * i=root;
    bstnode * ans = NULL;
    while (i!=t){
        if(data<i->data){
            ans = i;
            i=i->left;
        }
        else {
            i=i->right;
        }
    }
    if(ans!=NULL)
    return ans->data;
    else return INT_MIN;
    }
}
int main(){
bstnode *root;
root=NULL;
root = insert(root,15);
root = insert(root,10);
root = insert(root,11);
root = insert(root,25);
root = insert(root,85);
root = insert(root,55);
int x;
//  cout <<"Entet a number to search : ";
//  cin>>x;
//  cout<<search(root,x)<<endl;    
//  levelorder(root);
//  cout<<isbinarysearchtree(root)<<endl;
//  Delete(root,55);
// levelorder(root);
// cout<<search(root,55);
inorder(root);
cout<<endl;
cout<<inordersuccessor(root,85);
}