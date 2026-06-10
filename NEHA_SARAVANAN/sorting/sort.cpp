#include <iostream>
using namespace std;

int bubble()
{
    //bubble sort       
    int n;
    cout << "Bubble sort\nEnter size of array :\n";
    cin >> n;

    int a[n];
    cout << "enter array elements:\n";
    for(int i=0; i<n ; i++)
    {
    cin >> a[i] ;
    }
    
    for(int i=0 ; i< n-1 ; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
        if(a[j] > a[j+1])
        {
            swap(a[j],a[j+1]);
        }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
   

//selection sort
int selection()
{
    int n;
    cout << "\n\nSelection sort\nEnter size of array :\n";
    cin >> n;

    int b[n];
    cout << "Enter array elements:\n";
    for(int i=0; i<n ; i++)
    {
        cin >> b[i];
    }
 
    for(int i=0;i<n;i++)
    {
        int minvalue = i;
        for(int j = i+1; j<n; j++)
        {
            if(b[j] < b[minvalue])
            {
                minvalue = j;
            }
        }
        swap(b[i],b[minvalue]);
    }
    for(int i=0; i<n; i++)
    {
        cout << b[i] << " ";
    }
}



//decending order sort
int dsort()
{
    cout << "\n\nDecending order sort";
    int n;
    cout << "\nEnter size of array: \n";
    cin >> n;

    int c[n];
    cout << "Enter array elements :\n ";
    for ( int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int maxvalue = i;
        for(int j = i+1; j<n; j++)
        {
            if(c[j] > c[maxvalue])
            {
                maxvalue = j;
            }
        }
        swap(c[i],c[maxvalue]);
    }
    for(int i=0; i<n; i++)
    {
        cout << c[i] << " ";
    }
}

//zeros
int zero()
{
    int n;
    cout << "\nTo move Zeros at end\nEnter size of array :\n";
    cin >> n;

    int a[n];
    cout << "Enter array elements:\n";
    for(int i=0; i<n ; i++)
    {
    cin >> a[i] ; // 2 4 0 6 0
    }
    int j=0; //2

    for (int i = 0; i < n ; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i],a[j]);
            j++;
        }
  
    }

    for (int i = 0; i < j-1 ; i++)
    {
        int minvalue = i;
        for(int k = i+1; k<j-1; k++)
        {
            if(a[k] < a[minvalue])
            {
                minvalue = k;
            }
        }
        swap(a[i],a[minvalue]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
}


//even nums sort
int evensort()
{
    int n;
    cout<<"\n\nEven numbers sort\nEnter size of array: \n";
    cin >> n;
    int a[n];
    cout << "Enter an array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) //even
        {
            int minvalue=i;
            for (int j = i+1; j < n; j++)
            {
                int minvalue = i;
            for(int j = i+1; j<n; j++)
            {
                if(a[j] % 2 ==0 && a[j] < a[minvalue])
                {   
                    minvalue = j;
                }
            }
                swap(a[i],a[minvalue]);
            }    
        }    
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }  

}



int main()
{ 
    bubble();
    selection();
    dsort();
    zero();
    evensort();
    return 0;
}