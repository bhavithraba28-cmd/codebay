#include<bits/stdc++.h>
using namespace std;

struct Student
{
  int id;
  char name[20];
};

int main()
{
    Student s[] = {{101,"Ravi"},{102,"Helen"},{103,"ginger"}};

    fstream file1("student.dat", ios::binary | ios::out);
    ifstream file("student.txt");
    file1.write((char*)s, sizeof(s));

    file1.close();

    Student r[3];

    fstream file2("student.dat", ios::binary | ios::in);

    file2.read((char*)r, sizeof(r));

    cout<<"1. "<<r[0].id << " " << r[0].name << endl;
    cout<<"2. "<<r[1].id << " " << r[1].name << endl;
    cout<<"3. "<<r[2].id << " " << r[2].name << endl;

    file2.close();
}