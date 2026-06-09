#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node* left;
  node* right; 
};
node* root = NULL;
void insert(int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    if(root == NULL)
    {
        root = newnode;
        return;
    }

    node* temp = root;

    while(true)
    {
        if(value < temp->data)
        {
            if(temp->left == NULL)
            {
                temp->left = newnode;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if(temp->right == NULL)
            {
                temp->right = newnode;
                return;
            }
            temp = temp->right;
        }
    }
}
void inorder(node* temp)
{
    if(temp == NULL)
        return;

    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}
void preorder(node* temp)
{
    if(temp == NULL)
        return;

    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node* temp)
{
    if(temp == NULL)
        return;

    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data << " ";
}
void display()
{
    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << "\n";
} 
void search(node* temp, int key)
{
    if(temp == NULL)
    {
        cout << "Value not found\n";
        return;
    }

    if(temp->data == key)
    {
        cout << "Value found\n";
        return;
    }

    if(key < temp->data)
        search(temp->left, key);
    else
        search(temp->right, key);
}
void deleteNode(node* &temp, int key)
{
    if(temp == NULL)
        return;
    if(key < temp->data)
        deleteNode(temp->left, key);
    else if(key > temp->data)
        deleteNode(temp->right, key);
    else
    {
        if(temp->left == NULL)
        {
            node* del = temp;
            temp = temp->right;
            delete del;
        }
        else if(temp->right == NULL)
        {
            node* del = temp;
            temp = temp->left;
            delete del;
        }
        else
        {
            node* successor = temp->right;
            while(successor->left != NULL)
                successor = successor->left;

            temp->data = successor->data;
            deleteNode(temp->right, successor->data);
        }
    }
}
void update(int oldValue, int newValue)
{
    deleteNode(root, oldValue);
    insert(newValue);
}
void deleteTree(node* temp)
{
    if(temp == NULL)
        return;
    deleteTree(temp->left);
    deleteTree(temp->right);
    delete temp;
}
int main()
{
    int choice;
    do{
        cout << "1. Insert\n2. Display\n3. Search\n4. Update\n5. Delete\n6. Delete Tree\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
         case 1:
            int value;
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                break;
         case 2:
                display();
                break;
        case 3:
                int key;
                cout << "Enter value to search: ";
                cin >> key;
                search(root, key);
                break;
         case 4:
                int oldValue, newValue;
                cout << "Enter old value: ";
                cin >> oldValue;
                cout << "Enter new value: ";
                cin >> newValue;
                update(oldValue, newValue);
                break;
         case 5:
                int delValue;
                cout << "Enter value to delete: ";
                cin >> delValue;
                deleteNode(root, delValue);
                break;
         case 6:
                deleteTree(root);
                root = NULL;
                break;
        case 7:
                exit(0);
        }
    }while(choice != 7);

    return 0;
}