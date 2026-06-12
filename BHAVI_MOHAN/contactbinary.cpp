/*using bst inserted node of 99 contact, search and parent node with time complexity for search, execution and insertion
*/
#include<bits/stdc++.h>
#include <chrono>
using namespace std;
struct mycontact
{
    string name;
    string phonenum;
    string email;
    string category; 
    mycontact* left;
    mycontact* right;
};
mycontact me;
mycontact* root = nullptr;
void insert(string name, string phonenum, string email, string category)
{
    mycontact* newcontact = new mycontact();

    newcontact->name = name;
    newcontact->phonenum = phonenum;
    newcontact->email = email;
    newcontact->category = category;
    newcontact->left = nullptr;
    newcontact->right = nullptr;
    if(root == nullptr)
    {
        root = newcontact;
        return;
    }

    mycontact* temp = root;
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
void inorder(mycontact* temp)
{
    if(temp == nullptr)
        return;

    inorder(temp->left);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    inorder(temp->right);
}
void preorder(mycontact* temp)
{
    if(temp == nullptr)
        return;
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(mycontact* temp)
{
    if(temp == nullptr)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
}
void display()
{
    cout << "\n===== MY CONTACT =====\n";
    cout << "Name     : " << me.name << endl;
    cout << "Phone    : " << me.phonenum << endl;
    cout << "Email    : " << me.email << endl;
    cout << "Category : " << me.category << endl;

    cout << "\n===== CONTACT LIST =====\n";

    cout << "\nInorder:\n";
    inorder(root);

    cout << "\nPreorder:\n";
    preorder(root);

    cout << "\nPostorder:\n";
    postorder(root);
}
void search(mycontact* temp, string key)
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
void groupContacts(mycontact* root,int &personNo,string category)
{
    if(root == NULL)
        return;

    groupContacts(root->left, personNo, category);

    if(root->category == category)
    {
        cout << "Person " << ++personNo << endl;
        cout << "Name     : " << root->name << endl;
        cout << "Phone    : " << root->phonenum << endl;
        cout << "Email    : " << root->email << endl;
        cout << "Category : " << root->category << endl;
        cout << "----------------------\n";
    }

    groupContacts(root->right, personNo, category);
}
void displayGroups(mycontact* root)
{
    int personNo = 0;

    cout << "\n===== FRIENDS =====\n";
    groupContacts(root, personNo, "Friend");

    cout << "\n===== FAMILY =====\n";
    groupContacts(root, personNo, "Family");

    cout << "\n===== OFFICE =====\n";
    groupContacts(root, personNo, "Office");

    cout << "\n===== OTHERS =====\n";
    groupContacts(root, personNo, "Others");
}
int main()
{
        me.name = "Bhavithra";
        me.phonenum = "9876543210";
        me.email = "bhavithra001@gmail.com";
        me.category = "Owner";
        auto start = chrono::high_resolution_clock::now();
        int n;
        cout << "Enter number of contacts: ";
            cin >> n;
        for(int i = 1; i <=n; i++)
       {
           string name = "Person" + to_string(i);
           string phone = to_string(9000000000LL + i);
           string email = "person" + to_string(i) + "@example.com";
           string category;
            if(i % 4 == 1)
             category = "Friend";
            else if(i % 4 == 2)
              category = "Family";
            else if(i % 4 == 3)
              category = "Office";
            else
              category = "Others";
           insert(name, phone, email, category);
        }
        auto end = chrono::high_resolution_clock::now();
        cout<<"Insertion Time: "<< chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
        cout<<"\nExecution Time: " << duration.count() << " microseconds" << endl;
        display();
        auto searchStart = chrono::high_resolution_clock::now();
        search(root, "Person500");
        search(root, "Person1000");
        search(root, "Person11000");
        auto searchEnd = chrono::high_resolution_clock::now();
        cout << "Search Time: "<< chrono::duration_cast<chrono::nanoseconds>(searchEnd - searchStart).count()<< " ns\n";
        displayGroups(root);
       


        return 0;
}
