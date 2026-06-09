#include<bits/stdc++.h>
using namespace std;

class kovil
{
  string name;
public:
 void gettemple()
 {
    cout<<"enter temple name: ";
    cin>>name;
 }
 void displaytemple()
 {
    cout<<" TEMPLE NAME IS "<<name<<endl;
 }
};
class shivan:public kovil
{
    public:
  void displayshiva()
  {
    cout<<"shiva shiva shiva"<<endl;
  }
};
class murugan:public kovil
{
    public:
    void displaymurugan()
    {
        cout<<"muruga muruga muruga"<<endl;
    }
};
int main()
{
    kovil k;
    shivan s;
    murugan m;

    cout<<"TEMPLE DETAILS"<<endl;
    k.gettemple();
    k.displaytemple();
    s.displayshiva();
    m.displaymurugan();

    return 0;


}