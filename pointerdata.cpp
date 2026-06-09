#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int roll_no;
    int english, tamil, maths, science, social_science;
    int total_marks;
    char grade;
};

int sumofmarks(student* s)
{
    return s->english + s->tamil + s->maths + s->science + s->social_science;
}

void assigngrade(student* s)
{
    int average = s->total_marks / 5;

    if (average >= 90)
        s->grade = 'A';
    else if (average >= 75)
        s->grade = 'B';
    else if (average >= 60)
        s->grade = 'C';
    else if (average >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();

    student* students = new student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);

        cout << "Enter roll number: ";
        int start_roll_no = 1;

        for (int i = 0; i < n; i++)
        {
         students[i].roll_no = start_roll_no++;
        }

        cout << "Enter English mark: ";
        cin >> students[i].english;
        if(students[i].english < 0 || students[i].english > 100)
        {
            cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
            return 1;
        }

        cout << "Enter Tamil mark: ";
        cin >> students[i].tamil;
        if(students[i].tamil < 0 || students[i].tamil > 100)
        {
            cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
            return 1;
        }

        cout << "Enter Maths mark: ";
        cin >> students[i].maths;
        if(students[i].maths < 0 || students[i].maths > 100)
        {
            cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
            return 1;
        }

        cout << "Enter Science mark: ";
        cin >> students[i].science;
        if(students[i].science < 0 || students[i].science > 100)
        {
            cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
            return 1;
        }

        cout << "Enter Social Science mark: ";
        cin >> students[i].social_science;
        if(students[i].social_science < 0 || students[i].social_science > 100)
        {
            cout << "Invalid mark. Please enter a value between 0 and 100." << endl;
            return 1;
        }

        students[i].total_marks = sumofmarks(&students[i]);
        assigngrade(&students[i]);

        cin.ignore();
    }

    cout << "\nStudent Grade Report\n";
    cout << "---------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << students[i].name
             << "|Roll No: " << students[i].roll_no
             << "|Total Marks: " << students[i].total_marks
             << "|Grade: " << students[i].grade << endl;
    }

    delete[] students;
    return 0;
}
