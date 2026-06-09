#include<bits/stdc++.h>
using namespace std;
class patient
{
    protected:
  string patient_name;
  int age;
  int height;
  float weight;
  long long phone_number;
public:
void getpatient()
{
    cout<<"enter patient_name: ";
    cin>>patient_name;
    cout<<"enter age: ";
    cin>>age;
    cout<<"enter height: ";
    cin>>height;
    cout<<"enter wieght: ";
    cin>>weight;
    cout<<"enter phone_number: ";
    cin>>phone_number;
}
void displaypatient()
{
    cout<<"PATIENT NAME: "<<patient_name<<endl;
    cout<<"AGE: "<<age<<endl;
    cout<<"HEIGHT: "<<height<<endl;
    cout<<"WEIGHT: "<<weight<<endl;
    cout<<"PHONE NUMBER: "<<phone_number<<endl;

}};

class treatment : public patient
{
    private:
    string disease;
    int fees;
public:
  void gettreatment()
  {
    cout<<"enter disease: ";
    cin>>disease;
    cout<<"enter treatment fees: ";
    cin>>fees;
  }  

  void displaytreatment()
  {
    cout<<"DISEASE IS "<<disease<<endl;
    cout<<"TREATMENT FEES: "<<fees<<endl;
  }
};
int main()
{
    treatment t;
    treatment *pt;

    pt = &t;

    pt->getpatient();
    pt->gettreatment();

    cout<<"\n PATIENT DETAILS \n";

    pt->displaypatient();
    pt->displaytreatment();

    return 0;



}
/*siNGLE inheritance*/

