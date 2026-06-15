#include <iostream>
using namespace std;

int transpose()
{
    int a[2][3], temp[3][2];
    cout << "Enter an array for transpose: \n";
    for(int i=0; i<2 ;i++){
        for(int j=0; j<3 ; j++){
            cin >> a[i][j];
            temp[j][i] = a[i][j] ;
        }
        cout << endl;
    }
    for(int i=0; i<3 ;i++){
        for(int j=0; j<2 ; j++){
           
            cout << temp[i][j] << "\t";
        }
            cout << endl;
    }
}

//spiraltraverse
int spiralt()
{
    int a[3][3];
    /*
    1   2   3
    4   5   6
    7   8   9
    left-right, top-bottom, right-left, bottom-top
    op: 1 2 3 6 9 8 7 4 5
    */
    cout << "Enter an array for spiral transpose: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    int left = 0,right = 2,top = 0,bottom = 2;

    while(left <= right && top <= bottom)
    {
        //left-right
        for(int i = left; i<= right;i++)
        {
             cout <<a[top][i]<<" ";   
        }
        top++; 

        //top-bottom
        for(int i = top;i<=bottom;i++)
        {
            cout << a[i][right]<<" ";
        }
        right--;

        if(top <= bottom)
        {
        //right-left
        for (int i = right; i >= left; i--)
        {
           cout << a[bottom][i]<<" ";
        }
        bottom--;
        }

        if(left <= right)
        {
        //bottom-top
        for (int i = bottom; i >= top; i--)
        {
            cout << a[i][left]<<" ";
        }
        
        }
        
        
    }
}


int main()
{
    transpose();
    spiralt();
    return 0;
}