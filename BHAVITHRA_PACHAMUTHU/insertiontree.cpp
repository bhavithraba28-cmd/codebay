#include<bits/stdc++.h>
using namespace std;
class InsertionTree{
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
    Node*root;
    public:
    InsertionTree(){
        root=NULL;
    }
    Node*insertrecursion(Node*root,char data){
        if(root==NULL){
            return new Node(data);
        }
        if(data<root->data){
            root->Left=insertrecursion(root->Left,data);
        }
        else if(data>root->data){
            root->Right=insertrecursion(root->Right,data);
        }
        return root;
    }
    void insert(char data){
        root=insertrecursion(root,data);
    }
    void preorderRec(Node*root){
        if(root!=NULL){
            cout<<" "<<root->data;
            preorderRec(root->Left);
            preorderRec(root->Right);
        }
    }
    void inorderRec(Node*root){
        if(root!=NULL){
            inorderRec(root->Left);
            cout<<" "<<root->data;
            inorderRec(root->Right);
        }
    }
    void postorderRec(Node*root){
        if(root!=NULL){
            postorderRec(root->Left);
            postorderRec(root->Right);
            cout<<" "<<root->data;
        }
    }
    void preorder(){
        preorderRec(root);
    }
    void inorder(){
        inorderRec(root);
    }
    void postorder(){
        postorderRec(root);
    }
};
int main(){
    InsertionTree t;
    int n;
    char values;
    cout<<"Enter no.of nodes: ";
    cin>>n;
    for(int i=1;i<n;i++){
        cout<<"Enter character: "<<i<<": ";
        cin>>values;
        t.insert(values);
    }
    cout<<"Preorder Traversal: ";
    t.preorder();
    cout<<"\nInorder Traversal: ";
    t.inorder();
    cout<<"\nPostorder Traversal: ";
    t.postorder();
    return 0;
}