#include<bits/stdc++.h>
using namespace std;    
void sum(int* x, int* y)
{
    int sum= *x + *y;
    cout<<"Sum is: "<<sum<<endl;
}
void sub(int* x, int* y)
{
    int sub= *x - *y;
    cout<<"Sub is: "<<sub<<endl;
}
void multiply(int* x, int *y)
{
    int multiply= *x * *y;
    cout<<"Mul is: "<<multiply<<endl;
}
void divide(int*x,int*y)
{
    if(*y == 0)
    {
        cout<<"Division by zero is not allowed."<<endl;
        return;
    }
    int divide= *x / *y;
    cout<<"Div is: "<<divide<<endl;
}
void fibbonacci(int* n)
{
    if(*n < 0)
    {
        cout<<"Fibonacci is not defined for negative numbers."<<endl;
        return;}
    int a = 0, b = 1, c;
    cout<<"Fibonacci series: ";
    for(int i = 0; i < *n; i++)
    {
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    cout<<endl;
}
int main()
{
    int a, b, n, choice;

    cout << "Enter two numbers:" << endl;
    cin >> a;
    cin >> b;

    do
    {
        cout << "\n1.Sum\n2.Sub\n3.Multiply\n4.Divide\n5.Fibonacci\n6.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                sum(&a, &b);
                break;

            case 2:
                sub(&a, &b);
                break;

            case 3:
                multiply(&a, &b);
                break;

            case 4:
                divide(&a, &b);
                break;

            case 5:
                cout << "Enter the number for fibonacci:" << endl;
                cin >> n;
                fibbonacci(&n);
                break;

            case 6:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
                break;
        }
    }
    while (choice != 6);

    return 0;
}
/*addtion, sub, mul, div and fibonacci using pointer by passing parameters

*/
