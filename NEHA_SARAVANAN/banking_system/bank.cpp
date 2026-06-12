#include <bits/stdc++.h>
using namespace std;

struct account
{
    //acc data members
    int accno;
    string name;
    float balance;

    account*next;

    //constr
    account(int a,string n,float b)
    {
        accno = a;
        name = n;
        balance = b;
        next = NULL;
    }
};


account *head = NULL;


void createacc()
{
    int no;
    string name;
    float bal;

    cout<<"-------------------------\nAccount creation:-\n";
    cout<<"Enter acc num: ";
    cin >> no;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter balance: ";
    cin>>bal;
    
    account *newaccount = new account(no,name,bal);

    if (head == NULL)
    {
        head = newaccount;
    }
    else
    {
        account *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newaccount;
    }
    cout<<"Acoount created!\n-------------------------\n";
}



void display()
{
    account *temp = head;

    if (temp == NULL)
    {
        cout<<"-------------------------\nNo accounts\n-------------------------\n";
        return;
    }
    cout<<"\n-------------------------\n";
    cout<<"Account details:-\n";
    while (temp != NULL)
    {
        cout<<"Account no: "<<temp->accno<<"\n";
        cout<<"Name: "<<temp->name<<"\n";
        cout<<"Balance: "<<temp->balance<<"\n";

        temp = temp->next;
    }
    cout<<"-------------------------\n";
}



void search()
{
    int no;

    cout<<"-------------------------\nTo search a account:-\n";
    cout<<"Enter account number: ";
    cin>>no;

    account *temp = head;

    while (temp!=NULL)
    {
        if (temp->accno==no)
        {
            cout<<"Account found\n";
            cout<<"Name: "<<temp->name<<endl;
            cout<<"balance: "<<temp->balance<<endl;
            cout<<"-------------------------\n";
            return;
        }

        temp=temp->next;
        
    }

    cout<<"Account not found\n-------------------------\n";
    
}



void deleteacc()
{
    int no;

    cout<<"---------------------------\nAccount deletion:-";
    cout<<"\nEnter acc num: ";
    cin>>no;

    account *temp=head;
    account *prev=NULL;
    
    while (temp!=NULL)
    {
        if (temp->accno==no)
        {
            if (prev==NULL)
            {
                head=temp->next;
            }
            else
            {
                prev->next=temp->next;
            }

            delete temp;

            cout<<"Account deleted\n-------------------------\n";
            return;
            
        }
        prev=temp;
        temp=temp->next;   
    }
    cout<<"Account not found\n-------------------------\n";   
}



void deposit()
{
    int no;
    float amount;

    cout<<"-------------------------\nTo deposit:-\n";
    cout<<"Enter Acccount number: ";
    cin>>no;

    cout<<"Enter Amount: ";
    cin>>amount;

    account *temp=head;

    while (temp != NULL)
    {
        if (temp->accno==no)
        {
            temp->balance += amount;
            cout<<"Deposit succeccful\n-------------------------\n";
            return;
        }  
        temp=temp->next; 
    }
    cout<<"Account not found\n-------------------------\n"; 
}



void withdraw()
{
    int no;
    float amount;

    cout<<"-------------------------\nTo withdraw:-\n";
    cout<<"Enter Account number: ";
    cin>>no;

    cout << "Amount: ";
    cin>>amount;

    account *temp=head;

    while (temp!=NULL)
    {
        if (temp->accno==no)
        {
            temp->balance -= amount;
            cout<<"Withdraw success\n-------------------------\n";
            return;
        }

        temp=temp->next;
        
    }
    cout<<"Account not found\n-------------------------\n";    
}




int main()
{
    int choice;

    cout<<"BANK MANGEMENT SYSTEM\n";
    do
    {
        cout<<"1.Create account\n2.Search account\n3.Delete account\n4.Display account\n5.For Deposit\n6.For Withdraw\n7.Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

    switch (choice)
    {
        case 1:
            createacc();
            break;

        case 2:
            search();
            break;
        
        case 3:
            deleteacc();
            break;

        case 4:
            display();
            break;

        case 5:
            deposit();
            break;

        case 6:
            withdraw();
            break;

        case 7:
            cout<<"------Thank you!------";
            break;


        
        default:
            cout<<"Invalid choice Try again!\n-------------------------\n";
            break;
    }

 
    } 

    while (choice!=6);

    return 0;
}