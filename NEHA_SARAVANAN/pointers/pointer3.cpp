#include <bits/stdc++.h>
using namespace std;


class Student
{
public:
    string name;
    int roll;
    float marks;
};

void addstudent(Student *s)
{
    cout << "\nEnter student name: \n";
    cin >> s->name;
    cout << "Enter roll number: \n";
    cin >> s->roll;
    cout << "Enter marks: \n";
    cin >> s->marks;

cout << "student added successfully!\n";
}


void displaystudent (Student *s)
{
    cout << "\n Student details:--\n";
    cout << "name: "<< s->name <<"\n";
    cout<< "roll number: "<<s->roll<<"\n";
    cout<< "marks: "<<s->marks <<"\n";
}


int main(){
    Student student;
    Student *ptr = &student;

    int choice;

    while (true)
    {
        cout<<"\nStudent Management System\n1.Add student\n2.display student\n3.exit\nEnter chioce: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            addstudent(ptr);
            break;

        case 2:
            displaystudent(ptr);
            break;
        
        case 3:
            return 0;

        default:
            cout << "invalid choice\n";
        }
    }
return 0;
}



