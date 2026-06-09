#include<bits/stdc++.h>
using namespace std;

class MathUtility
{
private:
    int n;

public:

    MathUtility()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }

    void factorial(int x)
    {
        int fact = 1;

        for(int i=1;i<=x;i++)
        {
            fact = fact * i;
        }

        cout<<"Factorial = "<<fact<<endl;
    }

    void sumN(int &n, int &sum)
    {
        sum = 0;

        for(int i=1;i<=n;i++)
        {
            sum = sum + i;
        }

        cout<<"Sum of first "<<n<<" numbers = "<<sum<<endl;
    }

    void primeCheck()
    {
        int count = 0;

        for(int i=1;i<=n;i++)
        {
            if(n % i == 0)
                count++;
        }

        if(count == 2)
            cout<<"The number is Prime"<<endl;
        else
            cout<<"The number is Not Prime"<<endl;
    }

    void fibonacci()
    {
        int a = 0, b = 1, c;

        cout<<"Fibonacci Series: "<<a<<" "<<b<<" ";

        for(int i=3;i<=n;i++)
        {
            c = a + b;
            cout<<c<<" ";
            a = b;
            b = c;
        }

        cout<<endl;
    }

    void palindrome()
    {
        int temp = n;
        int rev = 0;

        while(temp != 0)
        {
            int r = temp % 10;
            rev = rev * 10 + r;
            temp = temp / 10;
        }

        if(rev == n)
            cout<<"Palindrome Number"<<endl;
        else
            cout<<"Not a Palindrome Number"<<endl;
    }

    int getNumber()
    {
        return n;
    }
};

int main()
{
    MathUtility m;

    int sum;
    int n = m.getNumber();

    cout<<endl;

    m.factorial(n);
    m.sumN(n, sum);
    m.primeCheck();
    m.fibonacci();
    m.palindrome();

    return 0;
}
/*code to understand base class and constructor for palindrome,primecheck, finonacci, factorial and sum of N numbers
**/
