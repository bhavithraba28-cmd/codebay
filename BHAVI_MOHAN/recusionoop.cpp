#include<iostream>
using namespace std;

class recursion
{
private:
    int n;
public:
    void getdata()
    {
        cout<<"Enter the number: ";
        cin>>n;
    }
    int factorial(int n)
    {
        if(n == 0 || n == 1)
            return 1;

        return n * factorial(n - 1);
    }
    void printN(int n)
    {
        if(n == 0)
            return;

        printN(n - 1);
        cout<<n<<" ";
    }
    int fibonacci(int n)
    {
        if(n == 0)
            return 0;

        if(n == 1)
            return 1;

        return fibonacci(n-1) + fibonacci(n-2);
    }
    void display()
    {
        cout<<"Factorial = "<<factorial(n)<<endl;

        cout<<"Numbers from 1 to N: ";
        printN(n);
        cout<<endl;

        cout<<"Fibonacci series: ";
        for(int i=0;i<n;i++)
        {
            cout<<fibonacci(i)<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    recursion r;

    r.getdata();
    r.display();

    return 0;
}
/*RECUSION BY CLASS FOR FIBONNACI, NUMBERS FROM 1 TO N AND FACTORIAL*/
