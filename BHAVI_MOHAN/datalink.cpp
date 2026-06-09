#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;

void push_front(int value)
{
    node *newnode = new node();
    newnode->data= value;
    newnode->next= head;
    head = newnode;
}
void push_back(int value) 
{
    node* newnode= new node();
    newnode->data= value;
    newnode-> next= NULL;

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp= head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert(int value, int pos)
{
    node* newnode=new node();
    newnode->data= value;
    newnode->next=NULL;

    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    node* temp=head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout << "Invalid position\n";
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
void display()
{
    if(head ==NULL)
    {
        cout<<"list is empty";
        return;
    }
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<"NULL" <<endl;
}
void pop_front()
{
    if(head ==NULL)
    {
        cout<<"List is empty";
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}
void pop_back()
{
    if(head ==NULL)
    {
        cout<<"List is empty";
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
        return;
    }
    node* temp=head;
    while(temp->next->next !=NULL)
    {
        temp= temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void remove(int pos)
{
    if (head == NULL || pos <= 0)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

int main()
{
    push_front(35);
    push_front(25);
    push_front(20); 
    push_front(15);
    push_front(10);
    push_front(5); 
    push_back(40);
    push_back(50);
    insert(17,3);
    remove(5);
    pop_back();
    pop_front();
    display();
  
    return 0;
}
/*linked list through main function for operation like inser, delete and search and display*/
