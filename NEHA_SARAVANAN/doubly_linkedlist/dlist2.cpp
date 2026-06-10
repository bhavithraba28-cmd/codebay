#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;

    node(int value){
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

struct dllist
{
    node* head;
    node* tail;

    dllist(){
        head=nullptr;
        tail = nullptr;
    }


    void create (int value)
    {
        node* newnode = new node(value);

        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        
    }




    void deletebegin()
    {
        if (head == nullptr)
        {
            cout << "list empty";
            return;
        }

        node* temp = head;

        if (head == tail)
        {
            head = tail = nullptr;
        }
        else{
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;    
    }



    void deleteend()
    {

        if (tail == nullptr)
        {
            cout << "list empty";
            return;
        }

        node* temp = tail;

        if (head == tail)
        {
            head = tail = nullptr;
        }
        else{
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp; 
    }



    void display()
    {
    node* temp = head;

    if (head == nullptr)
    {
        cout <<"list is empty!\n";
        return;
    }
    
    
    while (temp != nullptr)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
    }


};



int main()
{
    dllist list;

    list.create(10);
    list.create(20);
    list.create(30);

    list.display();

    list.deletebegin();
    list.display();

    list.deleteend();
    list.display();

    return 0;
}