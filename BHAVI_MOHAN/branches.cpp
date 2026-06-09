#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maximum, x = 11, y = 10;

    if (x < y)
        maximum = 2;
    else if (y == x)
        maximum = 0;
    else
        maximum = 1;

    switch(maximum)
    {
        case 1:
            cout << "x is higher value" << endl;
            break;
        case 2:
            cout << "y is higher value" << endl;
            break;
        default:
            cout << "x and y are same value" << endl;
    }

    return 0;
}/*conditional statement like if, else if and switch*/
