#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int *p = &a;

    cout << "a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Pointer p = \n" << p;
    cout << "Value using pointer = " << *p << endl;

    return 0;
}
/*simple code to understand pointer

*/
