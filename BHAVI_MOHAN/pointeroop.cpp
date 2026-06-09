#include<iostream>
using namespace std;

class Pointer
{
public:

    void show()
    {
        int a = 10;
        int *p = &a;

        cout<<"Value of a: "<<a<<endl;
        cout<<"Address of a: "<<p<<endl;
        cout<<"Value using pointer: "<<*p<<endl;
    }

    void array()
    {
        int arr[3] = {10,20,30};
        int *p = arr;

        cout<<"\nArray elements using pointer:\n";

        for(int i=0;i<3;i++)
        {
            cout<<*(p+i)<<" ";
        }
        cout<<endl;
    }

    void pointerarray()
    {
        int a=10, b=10,c=20;

        int *ptr[3];

        ptr[0]= &a;
        ptr[1]= &b;
        ptr[2]= &c;

        cout<<*ptr[0]<<" "<<*ptr[1]<<" "<<*ptr[2]<<" "<<endl;
    }

    void swappointer(int *x,int *y)
    {
        int temp;

        temp = *x;
        *x = *y;
        *y = temp;
    }
};

int add(int x, int y)
{
    return x + y;
}
int multiply( int s,int t)
{
    return s*t;
}

int main()
{
    Pointer p;

    p.show();
    p.array();
    p.pointerarray();

    int a=10,b=19;

    p.swappointer(&a,&b);

    cout<<"\nSWAPPED INTEGERS: "<<a<<" "<<b<<endl;

    int (*ptr)(int,int);   // function pointer

    ptr = add;

    cout<<"ADDITION: "<<ptr(5,4)<<endl;

    int q =10;
    int *r=&q;
    int **s=&r;
     int ***t=&s;
     cout<<"single pointer: "<<*r<<endl;
     cout<<"double pointer: "<<**s<<endl;
     cout<<"triple pointer: "<<***t<<endl;
     
     int *w=new int;
     int *x= new int;
     cout<<"enter the two numbers for multiplication: ";
     cin>>*w>>*x;

     ptr= multiply;
     cout<<"multiplication: "<<ptr(*w,*x);

     delete w;
     delete x;

    return 0;
}
/*pointers with parameter passing function using structure by add,mul and swaap

*/
