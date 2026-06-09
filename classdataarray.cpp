#include<bits/stdc++.h>
using namespace std;

class dataarray
{
public:
    int n,pos,value;
    int data[100];

    void getdata()
    {
        cout<<"Enter number of elements: ";
        cin>>n;
        cout<<"Enter array elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>data[i];
        }
                
    }

    void display()
    {
        cout<<"Array elements are: ";

        for(int i=0;i<n;i++)
        {
            cout<<data[i]<<" ";
        }

        cout<<endl;
    }
void update(int arr[],int n,int pos, int value)
{
    cout<<"Enter the number to update the pos: ";
    cin>>pos;
    cout<<"Enter the value to be updated in array: ";
    cin>>value;
    if(pos <0 || pos>=n)
    {cout<<"invlaid position";}
    else
    {arr[pos]=value;
    cout<<"the updated array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}    
}
    void maximum()
    {
        int max=data[0];
        for(int i=0;i<n;i++)
        {
            if(data[i]>=max)
            max=data[i];
        }cout<<"\nmaximum element of array\n: "<<max;

    }
    void reverse()
{
    int first = 0;
    int last = n - 1;

    while(first < last)
    {
        int temp = data[first];
        data[first] = data[last];
        data[last] = temp;

        first++;
        last--;
    }

    cout << "\nREVERSE ARRAY:\n";
    for(int i = 0; i < n; i++)
    {
     cout << data[i] << " ";
    }cout<<endl;
}
void insert()
{
    int pos, value;

    cout<<"Enter position: ";
    cin>>pos;

    cout<<"Enter value: ";
    cin>>value;

    for(int i=n-1;i>=pos;i--)
    {
        data[i+1] = data[i];
    }

    data[pos] = value;
    n++;
    cout<<endl;
}
void linear()
{
    int key;
    cout << "\nEnter the target value: \n";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(data[i] == key)
        {
            cout << "Key found at position " << i<<endl;;
            return; 
        }
    }
    cout << "Key not found";
    cout<<endl;
}
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }cout<<"sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
}
};

int main()
{
    dataarray d;

    d.getdata();
    d.display();
    d.insert();
    d.linear();
    d.display();
    d.update(d.data,d.n,d.pos,d.value);
    d.maximum();
    d.reverse();
    d.sort(d.data,d.n);
   

    return 0;
}