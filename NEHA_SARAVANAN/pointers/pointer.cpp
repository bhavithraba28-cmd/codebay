#include <iostream>
using namespace std;

//swap
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
                     
}

//maximum num
void maxi(int arr[], int size)
{
    int *p = arr;
    int max = *p;
    for(int i=0;i<size;i++)
    {
        if (*(p+i) > max)
        {
            max = *(p+i);
        }
    }
    cout << "Maximum element is: " << max << endl;

}


int main()
{
    int x=2, y=4;
    cout <<"before:\n"<< x << y <<"\n";
    swap(&x,&y);
    cout << "after:\n"<< x << y << "\n";

    int arr[] ={1,2,3,4,5};
    int size = 5;
    maxi(arr,size);

    return 0;
}