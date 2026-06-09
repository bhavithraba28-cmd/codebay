#include<bits/stdc++.h>
using namespace std;
class hospital
{
    protected:
    string name;
    string location;
    int id;
public:
   void gethospital()
   {
   cout<<"enter hospital name";
   cin>>name;
   cout<<"enter hospital location";
   cin>>location;
   cout<<"enter hospital id";
   cin>>id;
   }
   void displayhospital()
   {
   cout<< " HOSPITAL NAME: "<<name<<endl;
   cout<< " HOSPITAL LOCATION: "<<location<<endl;
   cout<< " HOSPITAL ID: "<<id<<endl;
   }
};
class doctor: public hospital
{
 protected:
 string dname;
 string specializaation;
 float experience;
 int salary;

 public:
 void getdoctor()
 {
    cout<<"enter doctor name: ";
    cin>>dname;
    cout<<"enter doctor specilization: ";
    cin>>specializaation;
    cout<<"enter years of experience: ";
    cin>>experience;
    cout<<"enter salary: ";
    cin>>salary;
 }
 void displaydoctor()
 {
    cout<<"DOCTOR NAME: "<<"Dr."<<dname<<endl;
    cout<<"DOCTOR'S SPECIALIZATION: "<<"Department of "<<specializaation<<endl;
    cout<<"DOCTOR'S YEAR OF EXPERIENCE: "<<experience<<"years"<<endl;
    cout<<"DOCTOR'S SALARY: "<<"RS." <<salary<<endl;

 }};

 class patient:public hospital
 {
    private:
    string patient_name;
    int age;
    string disease;
    string room_number;

    public:

    void getpatient()
    {
        cout<<"enter patient_name";
        cin>>patient_name;
        cout<<"enter age";
        cin>>age;
        cout<<"enter disease";
        cin>>disease;
        cout<<"enter room_number";
        cin>>room_number;
    }

    void displaypatient()
    {
        cout<<"PATIENT NAME: "<<patient_name<<endl;
        cout<<"PATIENT's AGE: "<<age<<" Years old"<<endl;
        cout<<"PATIENT'S DISEASE: "<<disease<<endl;
        cout<<"PATIENT'S ROOMNUMBER: "<<room_number<<endl;
    }};

    int main()
    {
        doctor d;
        patient p;

    cout << "\nEnter Doctor Details\n";
    d.gethospital();
    d.getdoctor();

    cout << "\nEnter Patient Details\n";
    p.gethospital();
    p.getpatient();

    cout << "\nDoctor Information\n";
    d.displayhospital();
    d.displaydoctor();

    cout << "\nPatient Information\n";
    p.displayhospital();
    p.displaypatient();


    
        return 0;

    }
/*hierarchical inheritance and encapsulation with access specifiers.

*/
