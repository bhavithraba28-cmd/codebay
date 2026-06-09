#include <bits/stdc++.h>
using namespace std;


class Calculator {
private:
    double num1;
    double num2;
    double num3;

public:
    
    Calculator() {
        num1 = 0;  
        num2 = 0;
        num3 =0;
        }

      void inputNumbers() {
        cout << "Enter first number: ";
        cin >> num1;  
        cout << "Enter second number: ";
        cin >> num2;  
        cout << "Enter second number: ";
        cin >> num3; 
       }

    double add() 
    {
        return num1 + num2+num3;
    
    }


    double subtract() 
    {
        return num1 - num2;
    }

    
    double multiply() {
        return num1 * num2 *num3;
    }

    double largestnumber()
    {
        double largest = max(num1, max(num2, num3));
        return largest;
      
    }

    
    double divide() {
        if (num2 != 0) {  
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;  
        }
    }

    void checkOddEven(double number) {
        
        if (static_cast<int>(number) != number) {
            cout << number << " is not an integer, so odd/even not applicable." << endl;
            return;
        }

        if (static_cast<int>(number) % 2 == 0) 
        {
            cout << number << " is Even." << endl;
        } else {
            cout << number << " is Odd." << endl;
        }
    }

    void performOddEvenChecks() {
        cout << "\nChecking first number (" << num1 << "):" << endl;
        checkOddEven(num1);

        cout << "\nChecking second number (" << num2 << "):" << endl;
        checkOddEven(num2);

        cout << "\nChecking third number (" << num3 << "):" << endl;
        checkOddEven(num3);
    }
};

int main() {
 
    Calculator c;


    c.inputNumbers();

    cout << "\nResults:" << endl;
    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.subtract() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
    cout << "Division: " << c.divide() << endl;
     cout << "largest of 3 numbers: " << c.largestnumber() << endl;

    c.performOddEvenChecks();


    cout << "\nPress Enter to exit...";
    cin.ignore(); 
    cin.get();    

    return 0;
}