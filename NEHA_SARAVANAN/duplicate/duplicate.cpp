#include <iostream>
#include <algorithm>
using namespace std;

//Finding duplicates
void duplicate()
{
    int n;
        cout<<"Enter array size: \n";
        cin >> n;
        int a[n];
        cout << "Enter array elements: \n";
        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }
        sort(a, a+n);

        cout << "Duplicate elements: ";
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] == a[i+1])
            {
                cout << a[i] << " ";
            }
        }
      
}


//Reverse the array
void reverse ()
{
        int n;
        cout<<"\nEnter array size: \n";
        cin >> n;
        int a[n];
        cout << "Enter array elements: \n";
        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        } 

        cout << "Reversed array:\n";
        for (int i = n-1; i >= 0; i--)
        {
            cout <<a[i] << endl;
        }
        
        
        
}
int main ()
{
    duplicate();
    reverse();
    return 0;
}