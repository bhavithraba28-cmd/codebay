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
node* insert(node* root, int value) {
    if (root == NULL)
        return createnode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}
bool search(node* root, int key) {
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
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
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node* root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
node* findmin(node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}
node* findmax(node* root) {
    while (root->right != NULL)
        root = root->right;
    return root;
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
    node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    cout << "Binary values inserted in order" << endl;
    cout << "Preorder : ";
    preorder(root);
    cout << endl;
    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    cout << "Postorder : ";
    postorder(root);
    cout << endl;
    cout << "Minimum value : " << findmin(root)->data<<endl;
    cout << "Maximum value : " << findmax(root)->data<<endl;
    if (search(root, 40))
        cout << "40 is found" << endl;
    else
        cout << "not found 40 in binary tree" << endl;
    cout << "Deleting tree" << endl;
    deletetree(root);
    cout << endl;
    root = NULL;
    return 0;
}
