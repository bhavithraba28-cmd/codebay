#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int *marks;
    int subjects;
    int total;
    float average;
    char grade;
    Student(int n){
        subjects=n;
        marks=new int[subjects];
        total=0;
        average=0;
        cout<<"Enter student name :";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter "<< subjects<<" Subject marks: " <<endl;
        for(int i=0;i<subjects;i++){
            cout<<"Subjects "<<i+1<<" mark: ";
            cin>>marks[i];
            total=total+marks[i];
        }
        average=total/subjects;
        if(average>=90){
            grade='A';
        }
        else if(average>=75){
            grade='B';
        }
        else if(average>=55){
            grade='C';
        }
        else if(average>=35){
            grade='D';
        }
        else{
            grade='F';
        }
    }
    void display(){
        cout<<"Student Grade Report"<<endl;
        cout<<"Name: "<<name<<endl;
        for(int i=0;i<subjects;i++){
            cout<<"Subjects "<<i+1 <<" :"<<marks[i]<<endl;  
             }
             cout<<"Total Marks: "<<total<<endl;
             cout<<"Average: "<<average<<endl;
             cout<<"Grade: "<<grade<<endl;
    }
    ~Student(){
        delete[]marks;
    }
};
int main(){
    int n;
    cout<<"Enter num of Subjetcs: ";
    cin>>n;
    Student s(n);
    s.display();
    return 0;
}