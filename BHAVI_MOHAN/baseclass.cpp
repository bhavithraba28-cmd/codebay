#include<bits/stdc++.h>
using namespace std;
class babycare
{
private:
 int baby_number;
 string mother_name;
 string father_name;
 float weight;
 int height;
 public:
 void getdata()
 {
 cout<<"enter baby_number: "<<endl;
 cin>>baby_number;
 cout<<"enter mother_name: "<<endl;
 cin>>mother_name;
 cout<<"enter father_name: "<<endl;
 cin>>father_name;
 cout<<"enter weight: "<<endl;
 cin>>weight;
 cout<<"enter height: "<<endl;
 cin>>height;
}
 void display()
 {
    cout<<"TODAY BORN BABY NUMBER: "<<baby_number<<endl;
    cout<<"BABY'S MOTHER NAME: "<<mother_name<<endl;
    cout<<"BABY'S FATHER NAME: "<<father_name<<endl;
    cout<<"BABY'S WEIGHT: "<<weight<<"gms"<<endl;
    cout<<"BABY'S HEIGHT: "<<height<<"cms"<<endl;

 }
 };

 int main()
 {
    babycare bc;
    babycare *bbc;

    bbc = &bc;  
    bbc->getdata();
    bbc->display();
    return 0;

}
/*code for base class and access specifiers*/
 



