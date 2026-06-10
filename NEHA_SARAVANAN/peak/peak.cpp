#include <iostream>
using namespace std;

//find missing element
int miss()
{
    int n;
    cout << "MISSING ELEMENT:-\n Enter array size: ";
    cin >> n;
    int a[n];
     cout << "Enter array:\n";
    for (int i = 0; i < n; i++)
    {    
        cin >> a[i];
    }
    
    for (int i = 0; i < n-1 ; i++)
    {
        cout << "Missing num:\t";
        if((a[i+1] - a[i]) != 1)
        {
            cout << a[i]+1 << endl;
        }
    }
      
}

//find peak elements 
int peak()
{
    int n;
    cout << "\nPEAK ELEMENT\nEnter size:\n";
    cin >> n;
    int a[n];
    cout << "Enter array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     
    cout << "Peak element: \n";
    for (int i = 0; i < n ; i++)
    {
           if (i == 0 && a[i] > a[i+1])
           {
            cout << a[i] << endl;
           }
           else if ((i > 0 && i < n-1) && ((a[i-1] < a[i]) && (a[i] > a[i+1])))
           {
            cout << a[i] << endl;
           }
           else if (i == n-1 &&a[i] > a[i-1])
           {
            cout << a[i] << endl;
           }    
    }
}

int main()
{
    miss();
    peak();
}