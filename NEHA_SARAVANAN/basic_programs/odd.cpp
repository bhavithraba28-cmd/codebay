#include <iostream>
using namespace std;

int main()
{
    //oddeven
    int num;
    cout << "Enter a num for odd or even check:\n";
    cin >> num ;
    if(num % 2 == 0)
    {
        cout << num << " is even"<< endl;
    }
    else{
        cout << num << " is odd"<< endl;
    }

    //greatest nums
    int a,b,c;
    cout << "Enter values(find greater):" << endl;
    cin >> a >> b >> c ;
    if((a>b)&&(a>c)){
        cout << a << " is greater" << endl;
    }
    else if((b>a)&&(b>c)){
        cout << b << " is greater"<< endl;
    }
    else {
        cout << c << " is greater"<< endl;
    }

    

    //to print table
    int n;
    cout << "Enter which table:" << endl;
    cin >> n;
    for(int j=0;j<11;j++){
        int ref = n*j;
        cout << n << "x" << j << "=" << ref << endl;
    }
    return 0;
}