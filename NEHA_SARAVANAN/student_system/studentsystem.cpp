#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int rollno;
    float marks;
};

struct node
{
    student *data;
    node* next;

//dynamic constr
    node()
    {
        data = new student;
        next = NULL;
    }
};

node* head = NULL;

void add()
{
    node *newnode = new node;

    cout<<"enter name:\n";
    cin>>newnode->data->name;

    cout<<"enter rollno: \n";
    cin>>newnode->data->rollno;

    cout<<"enter marks:\n";
    cin>>newnode->data->marks;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        
    }
    cout<<"student added!\n";
    
}


void display()
{
    if (head = NULL)
    {
       cout<<"no records found\n";
       return;
    }
    
    node *temp = head;

    while (temp != NULL)
    {
        cout << "Name: " <<temp->data->name;
        cout<<"Roll no: "<<temp->data->rollno;
        cout<<"Marks"<<temp->data->marks;
    }
    
}


void deletes()
{
    int r;

    cout<<"enter roll no to delete: \n";
    cin>> r;

    node *temp = head;
    node *prev = NULL;

    while (temp!=NULL && temp->data->rollno != r)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout<<"student not found";
        return;
    }

    if (prev == NULL)
    {
       head = temp->next;
    }
    else
    prev->next = temp->next;


    delete temp->data;
    delete temp;

    cout<<"deleted";
    
    
}


int main()
{

    int choice;

    do
    {
        cout<<"\nStudent Management System\n1.Add student\n2.display student\n3.delete student\n4.exit\nEnter chioce:\n";
        
        cin>>choice;

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            deletes();
            break;
        case 4:
            cout<<"exit";
            break;
        
        default:
            cout<<"invalid choice";
        }
    
    } while (choice != 4);
    
    return 0;
}