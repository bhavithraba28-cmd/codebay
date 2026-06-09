#include <bits/stdc++.h>
using namespace std;

class person
{
protected:
    string firstname, lastname, fullname;
    int age;
    string gender, address;

public:
    void getperson()
    {
        cout<<"Enter firstname: "<<endl;
        cin>>firstname;

        cout<<"Enter lastname: "<<endl;
        cin>>lastname;

        fullname = firstname + " " + lastname;

        cout<<"Enter age: "<<endl;
        cin>>age;

        cout<<"Enter gender: "<<endl;
        cin>>gender;

        cout<<"Enter address: "<<endl;
        cin>>address;
    }

    void displayperson()
    {
        cout<<"FULL NAME: "<<fullname<<endl;
        cout<<"AGE: "<<age<<" years"<<endl;
        cout<<"GENDER: "<<gender<<endl;
        cout<<"ADDRESS: "<<address<<endl;
    }
};

class student : virtual public person
{
protected:
    int student_id;
    string department;
    int marks;

public:
    void getstudent()
    {
        cout<<"Enter student ID: "<<endl;
        cin>>student_id;

        cout<<"Enter department: "<<endl;
        cin>>department;

        cout<<"Enter marks: "<<endl;
        cin>>marks;
    }

    void displaystudent()
    {
        cout<<"STUDENT ID: "<<student_id<<endl;
        cout<<"DEPARTMENT: "<<department<<endl;
        cout<<"MARKS: "<<marks<<endl;
    }
};

class teacher : virtual public person
{
protected:
    int teacher_id;
    string subject;
    int salary;
    float experience;

public:
    void getteacher()
    {
        cout<<"Enter teacher ID: "<<endl;
        cin>>teacher_id;

        cout<<"Enter subject: "<<endl;
        cin>>subject;

        cout<<"Enter salary: "<<endl;
        cin>>salary;

        cout<<"Enter experience: "<<endl;
        cin>>experience;
    }

    void displayteacher()
    {
        cout<<"TEACHER ID: "<<teacher_id<<endl;
        cout<<"SUBJECT: "<<subject<<endl;
        cout<<"SALARY: "<<salary<<endl;
        cout<<"EXPERIENCE: "<<experience<<" years"<<endl;
    }
};

class exam : public student
{
protected:
    string exam_name;
    int score;

public:
    void getexam()
    {
        cout<<"Enter exam name: "<<endl;
        cin>>exam_name;

        cout<<"Enter score: "<<endl;
        cin>>score;
    }

    void displayexam()
    {
        cout<<"EXAM NAME: "<<exam_name<<endl;
        cout<<"SCORE: "<<score<<endl;
    }
};

class result : public exam, public teacher
{
private:
    int total_marks;
    char grade;
    string result_status;

public:
    void getresult()
    {
        cout<<"Enter total marks: "<<endl;
        cin>>total_marks;

        cout<<"Enter grade: "<<endl;
        cin>>grade;

        cout<<"Enter result status: "<<endl;
        cin>>result_status;
    }

    void displayresult()
    {
        cout<<"TOTAL MARKS: "<<total_marks<<endl;
        cout<<"GRADE: "<<grade<<endl;
        cout<<"RESULT STATUS: "<<result_status<<endl;
    }
};

int main()
{
    result r;

    r.getperson();
    r.getstudent();
    r.getteacher();
    r.getexam();
    r.getresult();

    cout<<"\n----- DETAILS -----\n";

    r.displayperson();
    r.displaystudent();
    r.displayteacher();
    r.displayexam();
    r.displayresult();

    return 0;
}