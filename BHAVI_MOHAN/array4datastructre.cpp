#include<bits/stdc++.h>
using namespace std;
class arrayn
{
    private:
     int n;
     int arr[100];

  public:
    void getdata()
    {
        cout<<"Enter the number of arry's elements:";
        cin>>n;
        cout<<"the input of array elements are:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }cout<<endl;
    } 
    void display()
    {
        cout<<"the array elment is:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void sumofarray()
    {
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum= sum+arr[i];
        }
        cout<<"the sum of an array elemnet is :";
        cout<<sum<<endl;
    }
    void maxa()
    {
        int max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            max=arr[i];
        }
         cout<<"the max element in array is:"<<max<<endl;

    }
    void even()
    {
        int ne=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            ne++;
        }cout<<"the number of even element is:"<<ne;
        cout<<endl;
    }
    void odd()
    {
        int nodd=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            nodd++;
        }cout<<"the number of even element is:"<<nodd;
        cout<<endl;
    }
    void sumeven()
    {
      int sumeven=0;
      for(int i=0;i<n;i++)
      {
        if(arr[i]%2==0)
        sumeven=sumeven+arr[i];
      }cout<<"the sum of even number is :"<<sumeven<<endl;
    }
    void sumpairs()
    {
      int value;
      cout<<"enter the sum to be printed:";
      cin>>value;
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==value)

         cout<<"the sum of pairs:"<<arr[i]<<","<<arr[j]<<endl; 
            
        }  
      }cout<<endl; 
    }
};
int main()
{
    arrayn a;
    a.getdata();
    a.display();
    a.sumofarray();
    a.maxa();
    a.even();
    a.odd();
    a.sumeven();
    a.sumpairs();



    return 0;
}
/*code for sum of array, max of array, even number of array, odd number of array, sum of even array number and sum of pair of given number in  number.

*/
