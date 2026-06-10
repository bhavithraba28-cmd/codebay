#include <iostream>
using namespace std;
class Base
{
public:
    void displayBase()
    {
        cout << "Base class function" << endl;
    }
};
#include <iostream>
using namespace std;
class Base
{
public:
    int x;

    void getBase()
    {
        cout << "Enter base class value: ";
        cin >> x;
    }

    void displayBase()
    {
        cout << "Base class value = " << x << endl;
    }
};
class Derived : public Base
{
public:
    int y;
    void getDerived()
    {
        cout << "Enter derived class value: ";
        cin >> y;
    }
    void displayDerived()
    {
        cout << "Derived class value = " << y << endl;
    }
};
int main()
{
    Derived obj;

    Derived *dptr = &obj;
    Base *bptr = &obj;
    dptr->getBase();
    dptr->getDerived();
    cout << "\nUsing Derived pointer:" << endl;
    dptr->displayBase();
    dptr->displayDerived();
    cout << "\nUsing Base pointer:" << endl;
    bptr->displayBase();
    return 0;
}