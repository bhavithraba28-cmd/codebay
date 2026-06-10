#include <iostream>
using namespace std;

//dynamic allocation using pointers
//1.find maximum minimum
void maxmin(int *arr,int n)
{
    int max = *arr;
    int min = *arr;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    cout << "maximu = " << max << "\n";
    cout << "minimu = " << min << "\n";  
}


//2.reversing a array
void reverse(int *arr2, int n2)
{
    int *start = arr2;
    int *end = arr2 + (n2 - 1) ;
    
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }  
}



int main()
{
    // 1
    int n;
    cout<<"find maxi,min:-\nenter size : ";
    cin >> n >>"\n";
    int *arr = new int[n];
    cout<<"enter array: \n";
    for (int i=0; i < n; i++)
    {
        cin >> *(arr + i);
    }
    maxmin(arr,n);
    delete[] arr;

    

    //2
    int n2;
    cout<<"to reverse a array:-\nenter size : ";
    cin >> n2 ;

    int *arr2 = new int[n2];

    cout<<"enter array: \n";
    for (int i=0; i < n2; i++)
    {
        cin >> *(arr2 + i);
    }

    reverse(arr2,n2);

    cout << "reverse array: ";
    for (int  i = 0; i < n2; i++)
    {
        cout << *(arr2+i)<<" ";
    }

    delete[] arr2;
}