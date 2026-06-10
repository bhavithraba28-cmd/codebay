#include<iostream>
#include<string>
using namespace std;

void reverse()
{   
     string s1 ;
    cout << "Enter a string to reverse:\n";
    cin >> s1;
    char s2 = 0;
    for (int i = s1.length()-1; i >= 0; i--)
    {    
        s2 = s1[i];
        cout << s2;
    }
}

void palindrome()
{
    string s1 ;
    cout << "\nEnter a string for palindrome check:\n";
    cin >> s1;
    string s2 = "";
   
    for (int i = s1.length()-1; i >= 0; i--)
    {
        s2 += s1[i];
    }
    if (s2 == s1)
    {
        cout << s1 << " is palindrome"<<endl;
    }
    else
    cout << s1 << " is not a palindrome"<< endl;
    
    
}

int main()
{
    reverse();
    palindrome();
    return 0;
}