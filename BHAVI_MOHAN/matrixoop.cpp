#include<bits/stdc++.h>
using namespace std;

class matrix
{
public:
    int a[2][2], b[2][2], c[2][2], t[2][2];

    void getnumber()
    {
        cout<<"Enter elements of Matrix A:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }

        cout<<"Enter elements of Matrix B:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>b[i][j];
            }
        }
    }

    void show()
    {
        cout<<"\nMatrix A:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"\nMatrix B:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
   void add()
{
    int c[2][3];
 cout<<"\n sum of matrix\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
           
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void sub()
{
    int c[2][3];
 cout<<"\n sub of matrix\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
           
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void mul()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=0;
            
            for(int k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<<"\nmultiplication of matrix: \n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }

}
  void transpose()
{
    cout<<"Transpose Matrix:\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            t[j][i] = a[i][j]; 
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
};

int main()
{
    matrix m;
    m.getnumber();
    m.show();
    m.add();
    m.sub();
    m.mul();
    m.transpose();

    return 0;
}
/*matrix addtion,subtract and multiplication using class*/
