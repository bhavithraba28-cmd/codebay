#include <iostream>
using namespace std;


// find max element
    void maxi()
    {
        int n;
        cout<<"To find maximum element:-\nEnter array size: \n";
        cin >> n;
        int a[n];
        cout << "Enter array elements: \n";
        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }
        
        int max;
        for (int i = 0; i < n ; i++)
        {
            max = 0;
            if (a[max] < a[i])
            {
                max = i;
            }
        }

        cout << "Maximum num: " << a[max];
        
        
    }


void linear()
{
    // find element using linear search
    int n;
    cout << "\nEnter size of array: \n";
    cin >> n;
    int a[n];
    cout << "Enter array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int num;
    cout << "Enter a num to find: \n";
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
        return -1;
  
}
    // check element exists or not using binary search
    void binary()
    {
        
        int n;
        cout<<"\nEnter array size: \n";
        cin >> n;
        int a[n];
        cout << "Enter a sorted array : \n";
        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }
        int num;
        cout << "Enter which element to find: ";
        cin >> num; 
        
        int low = 0, high = n-1;
        int mid;
        bool p = false;
        while ( low <= high)
        {
            mid = (low+high) / 2;
            if (num == a[mid])
            {
                cout << "Element found at index: " << mid ;
                break;
                bool p = true;
            }
            else if (num < a[mid])
            {
                mid-1;
            }
            else if(num > a[mid])
            {
                mid+1;
            }
            else
            cout << "Element not found";
        }
    
    }

    

    int main()
    {
        maxi();
        int result = linear();
        if (result != -1 )
        {
            cout << "Element found at index: " << result;
        }
        else
        cout << "Element not found";
        binary();

    }