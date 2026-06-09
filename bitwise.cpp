#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x = 6, y = 4;
    cout << "x & y is " << (x & y) << endl;
    cout << "x | y is " << (x | y) << endl;
    cout << "x ^ y is " << (x ^ y) << endl;
    cout << "x << 1 is " << (x << 1) << endl;
    cout << "x >> 1 is " << (x >> 1) << endl;
    cout << "~(x) is " << ~(x)<< endl;

    {
        int m =10, n=19;
        int max= (m<n)? 19 : 10;
        cout << "max is "<< max <<endl;
    }
    return 0;
}
