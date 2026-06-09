#include<bits/stdc++.h>
using namespace std;

class decimal
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    float sum(float a, float b, float c)
    {
        return a + b + c;
    }
};

int main()
{
    decimal d;

    cout<<"Sum of 2 numbers: "<<d.sum(5,10)<<endl;
    cout<<"Sum of 3 numbers: "<<d.sum(2,3,4)<<endl;
    cout<<"Sum of 3 float numbers: "<<d.sum(2.5f,3.6f,4.7f)<<endl;

    return 0;
}
/*simple program for function overload with sum of 2,3,data type*/
