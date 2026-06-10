#include <iostream>
using namespace std;

void matrix()
{
    int a[3][3], b[3][3], sum[3][3], matrix[3][3] ,imatrix[3][3];

    cout << "Enter A array:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> a[i][j];
          
        }
        cout << endl;
    }

    cout << "Enter B array:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> b[i][j];
          
        }
        cout << endl;
    }

    // Addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // printMatrix addition
    cout << "\nSum Matrix:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << sum[i][j] << "\t"; 
        }
        cout << endl;
    }


    //matrix multiplication

    for(int i=0; i<3 ;i++){
        for(int j=0; j<3; j++)
        {
           matrix[i][j] = 0 ;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                matrix [i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication Matrix : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


//identity matrix
void imatrix()
{
    int xarr [3][3] = { {6,0,0},
                        {0,4,0},
                        {0,0,5}};

    int yarr [3][3] = { {3,0,0},
                        {0,6,0},
                        {0,0,9}};
    
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        imatrix[i][j] = 0;
    }
}

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                imatrix [i][j] += xarr[i][k]*yarr[k][j];
            }
        }
    }

    cout << "identiry matrix: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << imatrix[i][j] << " ";
        }
        cout << endl;
    }

    
}


int main()
{
    matrix();
    imatrix();
    return 0;
}