#include <iostream>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
};
node* createnode(int value) {
    node* newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void preorder(node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root) {
    if (root == NULL)
    return;
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
void postorder(node* root) {
    if (root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void deletetree(node* root) {
    if (root == NULL)
    return;
    deletetree(root->left);
    deletetree(root->right);
    cout << "Deleting node : " << root->data << endl;
    delete root;
}
int main()
{
    node* root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->right = createnode(50);
    root->right->left = createnode(60);
    root->right->right = createnode(70);
    cout << "Binary tree created" << endl;
    cout << "Preorder : ";
    preorder(root);
    cout << endl;
    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    cout << "Postorder : ";
    postorder(root);
    cout << endl;
    cout << "Deleting tree" << endl;
    deletetree(root);
    cout << endl;
    root = NULL;
    return 0;
}

