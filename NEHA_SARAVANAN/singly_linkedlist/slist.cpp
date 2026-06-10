#include <bits/stdc++.h>
using namespace std;

//linkedlist
struct node
{
    int data;
    node* next;
    //constructor                                                
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertbegin(node* &head, int value)
{
    node* newnode = new node(value);

    newnode->next = head;
    head = newnode;
}

void insertend(node* &head, int value)
{
    node* newnode = new node (value);

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    node* temp = head;

    while(temp->next != NULL) 
    {
        temp = temp->next;
    }

    temp->next = newnode;

}
                       
int main ()
{
    //create node
    node* newnode = new node(10); //constr call while obj creation
    cout << "node data: "<< newnode->data<< endl;

    //print linkedlist
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    
    //insertatbegin
    insertbegin(head,11);
    //insertatend
    insertend(head,33);

    node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }



    return 0;
}
