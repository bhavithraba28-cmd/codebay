#include<bits/stdc++.h>
using namespace std;
class Tree{
    struct Node{
        char data;
        Node*Left;
        Node*Right;
    Node(char d){
        data=d;
        Left=NULL;
        Right=NULL;
    }
};
    public:
    Node*Root=NULL;
    Node*createNode(){
        char values;
        cout<<"Enter node values or '0' for nodes: ";
        cin>>values;
        if(values=='0'){
            return NULL;
        }
        Node*newNode=new Node(values);
        cout<<"Enter left child of "<<values<<endl;
        newNode->Left=createNode();
        cout<<"Enter right child of "<<values<<endl;
        newNode->Right=createNode();
        return newNode;
    }
    void createTree(){
        Root=createNode();
    }
    void preorder(Node *p){
        if(p!=NULL){
            cout<<" "<<p->data;
            preorder(p->Left);
            preorder(p->Right);
        }
    }
    void inorder(Node *p){
        if(p!=NULL){
            inorder(p->Left);
            cout<<" "<<p->data;
            inorder(p->Right);
        }
     }
     void postorder(Node *p){
        if(p!=NULL){
            postorder(p->Left);
            postorder(p->Right);
            cout<<" "<<p->data;
        }
     }
     void display(){
        if(Root==NULL){
            cout<<"Tree is empty";
        }
        else{
            cout<<"Preorder Traversal: ";
            preorder(Root);
            cout<<"\nInorder Traversal: ";
            inorder(Root);
            cout<<"\nPostorder Traversal: ";
            postorder(Root);
        }
     }
};
int main(){
    Tree obj;
    obj.createTree();
    obj.display();
    return 0;
}