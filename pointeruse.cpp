#include<iostream>
using namespace std;

int add(int a, int b,int c)
{
    return a + b +c;
}

int subtract(int a, int b, int c)
{
    return a - b -c;
}

int multiply(int a, int b, int c)
{
    return a * b *c;
}

int divide(int a, int b,int c)
{
    return (a / b)/c;
}


int main()
{
    int a, b, c, choice;
    int (*ptr)(int, int, int);
   
    
        do
    {
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\n5. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        
        cout<<"\nEnter three numbers: ";
        cin>>a>>b>>c;

        if(choice == 5)
            break;

        switch(choice)
        {
            case 1:
                ptr = add;
                break;

            case 2:
                ptr = subtract;
                break;

            case 3:
                ptr = multiply;
                break;

            case 4:
                ptr = divide;
                break;

            default:
                cout<<"Invalid choice\n";
                continue;
        }

        cout<<"Result = "<<ptr(a,b,c)<<endl;

    } while(true);
     
    cout<<"Calculator Closed\n";

    return 0;
}