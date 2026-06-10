#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
};

//create node
node* create (int value)
{
    node* newnode = new node();

    newnode->data = value;
    newnode->prev = nullptr;
    newnode->next = nullptr;

    return newnode;
}


    //insert at starting
    void insertbegin(node*& head, node*& tail, int value)
    {
        node* newnode = create(value);

        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }


    //insert at last || using this for node creation also
    void insertend(node*& head, node*& tail, int value)
    {

    node* newnode = create(value);

    if (head == nullptr)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}


void display(node* head)
{
    node* temp = head;

    while (temp != nullptr)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;


}


int main()
{
    node* head = nullptr;
    node* tail = nullptr;

    insertend(head, tail, 10);
    insertend(head, tail, 20);
    insertend(head, tail, 30);

    display(head);

    insertbegin(head,tail,5);
    display(head);

    insertend(head,tail,33);
    display(head);

    
    return 0;
}
