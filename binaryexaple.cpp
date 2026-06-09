#include<bits/stdc++.h>
using namespace std;
struct contact
{
    string name;
    string phonenum;
    string email;
    contact* left;
    contact* right;
};
contact* root = nullptr;
void insert(string name, string phonenum, string email)
{
    contact* newcontact = new contact();
    newcontact->name = name;
    newcontact->phonenum = phonenum;
    newcontact->email = email;
    newcontact->left = nullptr;
    newcontact->right = nullptr;
    if(root == nullptr)
    {
        root = newcontact;
        return;
    }

    contact* temp = root;
    while(true)
    {
        if(name < temp->name)
        {
            if(temp->left == nullptr)
            {
                temp->left = newcontact;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if(temp->right == nullptr)
            {
                temp->right = newcontact;
                return;
            }
            temp = temp->right;
        }
    }
}
void inorder(contact* temp)
{
    if(temp == nullptr)
        return;

    inorder(temp->left);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    inorder(temp->right);
}
void preorder(contact* temp)
{
    if(temp == nullptr)
        return;
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(contact* temp)
{
    if(temp == nullptr)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
}
void display()
{
    cout << "Inorder: " << endl;
    inorder(root);
    cout << "\nPreorder: " << endl; 
    preorder(root);
    cout<<"\nPostorder: " << endl;
    postorder(root);
}
void search(contact* temp, string key)
{
    if(temp == nullptr)
    {
        cout << "Contact not found\n";
        return;
    }
    if(temp->name == key)
    {
        cout << "Contact found: Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
        return;
    }
    if(key < temp->name)
      search(temp->left, key);
    else
       search(temp->right, key);
}
int main()
{
    insert("Alice", "123-456-7890", "alice@example.com");
    insert("Bob", "987-654-3210", "bob@example.com");
    insert("Charlie", "555-555-5555", "charlie@example.com");
    insert("Brick", "456-642-5464", "brick@example.com");
    insert("David", "321-654-9870", "david@example.com");
    insert("Eve", "654-321-0987", "eve@example.com");
    insert("Frank", "789-012-3456", "frank@exampl.com");
    insert("gilmma", "264-465-5454","gilmmma@example.com");
    search(root, "Charlie");
    search(root, "Zoe");
    display();
    return 0;
}