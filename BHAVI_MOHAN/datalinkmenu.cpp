#include<bits/stdc++.h>
using namespace std;
struct node
{
 int data;
 node* next;
};
node* head=NULL;
void insertfront(int value)
{
    node* newnode= new node();
    newnode->data = value;
    newnode->next = head;
    head= newnode;
}
void insertlast(int value)
{
    node* newnode= new node();
    newnode->data = value;
    newnode->next = NULL;
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
void insertmiddle(int value, int pos)
{
    node* newnode = new node();
    newnode->data = value;

    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    node* temp = head;
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
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<"NULL" <<endl;

}
void deleteFirst()
{
    if(head == NULL)
        return;

    node* temp = head;
    head = head->next;
    delete temp;
}
void deleteMiddle(int pos)
{
    if(head == NULL)
        return;

    node* temp = head;

    for(int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }

    node* del = temp->next;
    temp->next = del->next;
    delete del;
}void deleteEnd()
{
    if(head == NULL)
        return;

    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}
int search(int key)
{
    node* temp = head;
    int pos = 0;

    while(temp != NULL)
    {
        if(temp->data == key)
            return pos;

        temp = temp->next;
        pos++;
    }

    return -1;  
}
int main()
{
  int choice,value,pos;
  do{
    cout<<"\n1.Insertfront\n2.Insertmiddle\n3.Insertend\n4.deletefront\n5.deletemiddle\n6.deleteend\n7.search\n8.display\n";
    cout<<"Enter choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"enter value: ";
        cin>>value;
        insertfront(value);
        break;

         case 2:
        cout<<"enter value";
        cin>>value;
        cout<<"enter position :";
        cin>>pos;
        insertmiddle(value,pos);
        break;

         case 3:
        cout<<"enter value";
        cin>>value;
        insertlast(value);
        break;

         case 4:
        deleteFirst();
        break;

         case 5:
        cout<<"enter value";
        cin>>pos;
        deleteMiddle(pos);
        break;

         case 6:
        deleteEnd();
        break;


         case 7:
        cout<<"enter value";
        cin>>value;
        search(value);
        break;

         case 8:
         display();
         break;

         case 9:
         cout<<"\nEnd of nodes...";
         break;

         default:
         cout<<"Invslid choice";
         break;


    }
}while(choice!=9);

  return 0;
}
/*linked list using structure with swtich and do..while with operations like insert, delete, search and display
*/
