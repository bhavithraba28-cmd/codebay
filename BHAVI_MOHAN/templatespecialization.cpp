#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator 
{
private:
    T a, b;

public:
    Calculator() 
    {
      a=0;
      b=0;
    } 
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a;
        cin>>b;
    }
    T add() const 
    {
        return a + b;
    }
    T subtract() const 
    {
        return a - b;
    }
    T multiply() const 
    {
        return a * b;
    }
    T divide() const 
    {
        if (b == 0) {
            cout << "Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }

    void showResults() const 
    {
        cout << "Generic Calculator<T>\n";
        cout << "Add: " << add() << "\n";
        cout << "Subtract: " << subtract() << "\n";
        cout << "Multiply: " << multiply() << "\n";
        cout << "Divide: " << divide() << "\n";
    }
};

template <>
class Calculator<int> 
{
private:
    int a, b;

public:
    Calculator(int x, int y)
    {
        a=x;
        b=y;
    }
    int add() const 
    {
        return a + b;
    }

    int subtract() const 
    {
        return a - b;
    }

    int multiply() const 
    {
        return a * b;
    }

    int divide() const 
    {
        if ( a==0 || b==0) 
        {
            cout << "Division cannot be done.\n";
            return 0;
        }
        return a / b;  
    }

    int modulus() const 
    {
        if ( a==0 || b==0) 
        {
            cout << "Modulus cannot be done.\n";
            return 0;
        }
        return a % b;
    }

    void showResults() const {
        cout << "Specialized Calculator<int>\n";
        cout << "Add: " << add() << "\n";
        cout << "Subtract: " << subtract() << "\n";
        cout << "Multiply: " << multiply() << "\n";
        cout << "Divide (integer division): " << divide() << "\n";
        cout << "Modulus: " << modulus() << "\n";
    }
};

template <>
class Calculator<double> {
private:
    double a, b;

public:
    Calculator(double x, double y) 
    {
        a=x;
        b=y;
    }

    double add() const
    {
        return a + b;
    }

    double subtract() const 
    {
        return a - b;
    }

    double multiply() const 
    {
        return a * b;
    }

    double divide() const 
    {
        if (a == 0.0 || b == 0.0) 
        {
            cout << "Division cannot be done.\n";
            return 0.0;
        }
        return a / b;
    }

    void showResults() const {
        cout << fixed << setprecision(2);
        cout << "Specialized Calculator<double>\n";
        cout << "Add: " << add() << "\n";
        cout << "Subtract: " << subtract() << "\n";
        cout << "Multiply: " << multiply() << "\n";
        cout << "Divide: " << divide() << "\n";
    }
};

int main() {
    Calculator<float> c1;
    c1.input();
    c1.showResults();

    cout << "\n";

    Calculator<int> c2(10, 3);
    c2.showResults();

    cout << "\n";

    Calculator<double> c3(10.0, 3.0);
    c3.showResults();

    return 0;
}