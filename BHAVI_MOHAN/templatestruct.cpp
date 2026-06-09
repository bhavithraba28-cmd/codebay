#include<bits/stdc++.h>
using namespace std;    
template <typename T>
struct bmi
{
    string name;
    T age;
    string gender;
    T height;
    T weight;
    void input()
    {
        cout<<"Enter name:";
        getline(cin>>ws,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter gender:";
        cin>>gender;
        if(gender == "female " || gender == "male")
        {
            cout<<"Invalid input for gender. Please enter 'male' or 'female'."<<endl;
            exit(1);
        }
        cout<<"Enter weight in kg:";
        cin>>weight;
        cout<<"Enter height in meters:";
        cin>>height;
    }
    T calculate()
    {
        return weight/(height*height);
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Height: "<<height<<endl;
        if(calculate()<18.5)
        {
            cout<<"Underweight"<<endl;
        }
        else if(calculate()>=18.5 && calculate()<25)
        {
            cout<<"Normal weight"<<endl;
        }
        else if(calculate()>=25 && calculate()<30)
        {
            cout<<"Overweight"<<endl;
        }
        else
        {
            cout<<"Obesity"<<endl;
        }
    }

};
int main()
{
    bmi<double> b;
    b.input();
    cout<<"BMI of following criteria is : "<<b.calculate()<<endl;
    b.show();
    return 0;

}