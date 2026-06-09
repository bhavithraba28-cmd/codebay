#include <bits/stdc++.h>
using namespace std;

void swap(int *f, int *h)
{
    int temp;
    temp= *f;
    *f=*h;
    *h= temp;
}
void add(int *x,int *y)
{
    int sum;
    sum =*x+*y;
    cout<<"sum = "<<*x+*y<<endl;
}
int main ()
{
    int a =100;
    int b=100;
    int i=10;
    char c='A';
    string q="Bhavi";
    string *qq;
    char *cc;
    cc = &c;
    qq=&q;
    int *aa;
    aa= &a;
    int f=10,h=19;
    cout <<"before swapping"<<endl;
    cout<<"f= "<<f<<"h="<<h<<endl;
    swap(&f,&h);
    cout<<"after swapping"<<endl;
    cout<<"f="<<f<<"h="<<h<<endl;
    add(&a,&b);
    cout<<"value of i:"<<i<<endl;
    cout<<"value of &i:"<<&i<<endl;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of &a:"<<&a<<endl;
    cout<<"value of *aa:"<<*aa<<endl;
    cout<<"value of aa:"<<aa<<endl;
    cout<<"value of q:"<<q<<endl;
    cout<<"value of &q:"<<&q<<endl;
    cout<<"value of *qq:"<<*qq<<endl;
    cout<<"value of qq:"<<qq<<endl;
    cout<<"value of c:"<<c<<endl;
    cout<<"value of &c:"<<&c<<endl;
    cout<<"value of *cc:"<<*cc<<endl;
    cout<<"value of cc:"<<cc<<endl;
    return 0;

}