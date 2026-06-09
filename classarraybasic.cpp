#include<bits/stdc++.h>
using namespace std;

class Arrayops
{
 private:
    int a[5];
 public:
  void input()
   {
    cout<<"\nARRAY NUMBERS ARE:\n";
    for (int i=0;i<5;i++)
    cin>>a[i];
    }
void display()
{
    for (int i=0;i<5;i++)
    cout<<a[i]<<" ";

}
 void reverse()
 {
    cout<<"\nREVERSE ARRAY:\n";
    for(int i=4;i>=0;i--)
   cout<<a[i]<< " ";   
 }
void max()
{
    int max= a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
       max= a[i];
    }
       cout<<"\nMAXIMUM ELEMENT IN ARRAY:\n"<<max;
    }
    void max2nd()
{
    int max1=a[0];
    int max2;
    for(int i=0;i<5;i++)
    {
        if(a[i]>max1)
       max2=a[i++];
    }
cout<<"\nsecond largest: \n"<<max2;
}
void sumn()
{
    int sum=0;
for(int i=0;i<5;i++)
sum=sum+a[i];
cout<<"\nsum arrray of elements\n:";
cout<<sum;
}
void Lrotate()
{
    int b[5]={4, 2 , 5, 6,8};
    int first =b[0];
 
   
    {for(int i=0;i<4;i++)
    b[i] =b[i+1];
 b[4]= first;}
   
    
  cout<<"\nLEFT ROTATE ARRAY: \n";
  for(int i=0;i<5;i++)
   cout<<b[i]<< " "; 

}
void Rrotate()
{

    int last =a[4];

   
    { for(int i=4;i>0;i--)
    a[i] =a[i-1];
}
    a[0]=last;
    
  cout<<"\nRIGHT ROTATE ARRAY: \n";
  for(int i=0;i<5;i++)
   cout<<a[i]<< " "; 

}

};
int main()
{
    Arrayops a;
    a.input();
    a.display();
    a.reverse();
   a.max();
    a.Rrotate();
 a.sumn();
  a.max2nd();
  a.Lrotate();
   


}