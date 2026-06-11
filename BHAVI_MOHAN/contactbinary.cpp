/*using bst inserted node of 99 contact, search and parent node with time complexity for search, execution and insertion
*/
#include<bits/stdc++.h>
#include <chrono>
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
      auto start = chrono::high_resolution_clock::now();
        int n;
        cout << "Enter number of contacts: ";
            cin >> n;
        for(int i = 1; i <=n; i++)
       {
            string name = "Person" + to_string(i);
            string phone = to_string(9000000000LL + i);
           string email = "person" + to_string(i) + "@example.com";

            insert(name, phone, email);
           
        }
        auto end = chrono::high_resolution_clock::now();
        cout<<"Insertion Time: "<< chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
        cout<<"\nExecution Time: " << duration.count() << " microseconds" << endl;
        display();
        search(root, "Person500");
        search(root, "Person1000");
        search(root, "Person11000");
        end = chrono::high_resolution_clock::now();
        cout << "Search Time: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count()<< " ns\n";
        return 0;
}
