#include <iostream>
using namespace std;


// call by value , reference using pointer
void incr(int a)
{
    a++;
}

void incr1(int *p)
{
    (*p)++;
}


int arraysum(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}


int main ()
{
    int a=7;
    incr(a);  // call by value
    cout << a << endl;  // 7  no incr bcoz seperate variable created in seperate functs so use address to increment

    int a1=7;
    incr1(&a1); // call by reference
    cout <<a1 << endl;

    //arraysum
    int arr[5]={1,2,3,4,5};
    int n=5;
    int sum = arraysum(arr,5);
    cout << "sum: "<< sum<< endl;
}

