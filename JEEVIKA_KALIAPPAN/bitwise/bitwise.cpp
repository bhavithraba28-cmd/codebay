#include <iostream>
using namespace std;
int main()
{
    int ifirstvariable = 14,isecondvariable=18,iresult=0,a=3,b=10;
    iresult = (ifirstvariable & isecondvariable);
    cout << "Bitwise AND: " << iresult << endl;
    iresult = (ifirstvariable | isecondvariable);
    cout << "Bitwise OR: " << iresult << endl;
    iresult = (ifirstvariable ^ isecondvariable);
    cout << "Bitwise XOR: " << iresult << endl;
    iresult = ~ifirstvariable;
    cout << "Bitwise NOT: " << iresult << endl;
    int c = a << 3;
    cout << "Left shift: " << c;
    int d = b >>2;
    cout << "Right shift: " << d;
    return 0;
}

