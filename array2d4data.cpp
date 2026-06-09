#include<bits/stdc++.h>
using namespace std;

struct twodarray
{
    int r1, c1, r2, c2;
    int a[100][100], b[100][100];

    void getdata()
    {
        cout << "Enter the number of rows of matrix A: ";
        cin >> r1;
        cout << "Enter the number of columns of matrix A: ";
        cin >> c1;

        cout << "Enter the number of rows of matrix B: ";
        cin >> r2;
        cout << "Enter the number of columns of matrix B: ";
        cin >> c2;

        cout << "Enter the elements of matrix A:\n";
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "Enter the elements of matrix B:\n";
        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void display()
    {
        cout << "Matrix A:" << endl;
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\nMatrix B:" << endl;
        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void matrixadd()
    {
        if(r1 != r2 || c1 != c2)
        {
            cout << "Matrix addition not possible." << endl;
            return;
        }

        int sum[100][100];
        cout << "Sum of matrix:" << endl;

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void matrixmul()
    {
        if(c1 != r2)
        {
            cout << "Matrix multiplication not possible." << endl;
            return;
        }

        int mul[100][100] = {0};

        cout << "Multiplication of matrix:" << endl;
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                for(int k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

  void primdiagonal()
  {
    int r,c;
    r=r1;
    c=c1;
    if(r!=c)
    {
       cout<<"the diagonal element is not possible because matrix A is not square"<<endl;
       return;
    }
    cout<<"the diagonal elements of matrices: "<<endl;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          if(i==j)  
            cout<<a[i][j]<<" ";
            else
                cout<<"0"<<" "; 
        }cout<<endl;
    }
  }  
 void secdiagonal()
 {
    if(r2 != c2)
    {
        cout << "The secondary diagonal is not possible because matrix B is not square." << endl;
        return;
    }

    cout << "The secondary diagonal elements of matrix B are: "<<endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            if(i + j == r2 - 1)
            {
                cout << b[i][j] <<" ";}
             else{
                cout<<"0"<<" ";   
            }
        }cout<<endl;
    }
  
}
  void tranpose()
  {
    int r=r2;
    int c=c2;
    int t[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          t[j][i]= b[i][j];
        }
    }
    cout<<"tranpose of matrix: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<t[i][j]<<" ";
        }cout<<endl;
    }

  }
};

int main()
{
    twodarray t;
    t.getdata();
    t.display();
    t.matrixadd();
    t.matrixmul();
    t.primdiagonal();
    t.secdiagonal();
    t.tranpose();

    return 0;
}
