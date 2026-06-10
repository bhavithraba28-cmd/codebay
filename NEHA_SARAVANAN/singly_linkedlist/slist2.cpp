#include <bits/stdc++.h>
using namespace std;

//linkedlist 

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};


void deletebegin(node* &head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return ;
    }

    node* temp = head;
    head = head->next;

    delete temp;  
}



void deleteend(node* &head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    
    node* temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = NULL;
}



int main()
{

    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    deletebegin(head);

    deleteend(head);

    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}