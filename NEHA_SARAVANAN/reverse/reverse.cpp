#include <iostream>
using namespace std;
              
void reverse()
{
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    //357                     
    //753                 
    int rev = 0; 
     int val =0;
    while (n != 0)
    {
        val = n%10;
        rev = rev*10 + val;
        n= n/10;
        
    }                                                                                  
    cout << "Reversed num "<<rev << "\n";
                                     
}


void palindrome()
{
    int n;
    cout << "Enter a number: \n";
    cin >> n;

    int num1 = n;
    int rev =0;
    int val = 0;
    // 373    
    while (n != 0)
    {
        val= n%10;
        rev = rev*10 + val;
        n=n/10;
    }


    if (rev == num1)
    {
        cout <<num1<<"  is palindrome";
    }
    else{
        cout<<num1<<"  is not a palindrome";
}
}

int main()
{
    reverse();
    palindrome();

    return 0;
}
