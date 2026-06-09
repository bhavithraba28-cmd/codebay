#include<bits/stdc++.h>
using namespace std;

struct BMI
{ 
  float weight;
  int height; 
  float bmi;

  void getdata()
  {
    cout<<"enter height";
    cin>>height;
    cout<<"enter weight:";
    cin>>weight;
    }

  void bmicheck()
  {
  bmi= weight / (height * height);
    if(bmi<18.5){
    cout<<"\nYou are in good shape\n";

                cout<<"\nDiet Plan:\n";
                cout<<"250 gms protein\n";
                cout<<"200 gms fibre\n";
                cout<<"200 gms fruits\n";

                cout<<"\nSleep Time:\n";
                cout<<"8 hours sleep\n";

                cout<<"\nExercise Plan:\n";
                cout<<"50 pull-ups\n";
                cout<<"2 kg weight lifting\n";
                cout<<"20 minutes treadmill\n";
                cout<<"20 minutes breathing exercise\n";

    }
    else if(bmi<19 && bmi >24.9)
    {
                cout<<"\nYou need more training\n";

                cout<<"\nMorning Routine:\n";
                cout<<"Wake up at 6 AM\n";
                cout<<"Drink 3 litres of water\n";

                cout<<"\nYoga Exercises:\n";
                cout<<"Utkatasana\n";
                cout<<"Malasana\n";
                cout<<"Cobra Pose\n";

                cout<<"\nExercise Plan:\n";
                cout<<"20 minutes cardio\n";
                cout<<"30 minutes running\n";

    }
    else{
      cout<<"\nYou are overweight need full training strictly]n";

                cout<<"\nMorning Routine:\n";
                cout<<"Wake up at 6 AM\n";
                cout<<"Drink 5litres of water\n";

                cout<<"\nYoga Exercises:\n";
                cout<<"Utkatasana\n";
                cout<<"Malasana\n";
                cout<<"Cobra Pose\n";

                cout<<"\nExercise Plan:\n";
                cout<<"20 minutes cardio\n";
                cout<<"30 minutes running\n";

    }

  }

 } ;

 int main()
 {
  BMI b;
  b.getdata();
  b.bmicheck();
  
 }