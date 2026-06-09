#include <iostream>
using namespace std;

struct datamax
{
    int arr[100];
}d;
void findMax()
{
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;   
    cout<<endl; 
    cout<<"Enter the elements for array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> d.arr[i];
    }
    int *p = d.arr;
    int max = *p;
    for(int i = 0; i < n; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    cout << "Maximum = " << max;
}
int main()
{
    findMax();
    return 0;
}