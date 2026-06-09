#include<bits/stdc++.h>
using namespace std;
template<typename T>
class calculator {
public:
    T add(T a, T b, T c) {
        return a + b + c;
    }
    T subtract(T a, T b, T c) {
        return a - b - c;
    }
    T multiply(T a, T b, T c) {
        return a * b * c;
    }
    T divide(T a, T b) 
    {
        if (a == 0 || b == 0) {
            throw invalid_argument("Division is not allowed.");
        }
        return a / b;
    }
};
int main() {
    calculator<int> intCalc;
    cout << "Integer Addition: " << intCalc.add(15, 2,13) << endl;
    cout << "Integer Subtraction: " << intCalc.subtract(15, 2, 8) << endl;
    cout << "Integer Multiplication: " << intCalc.multiply(15, 2, 5) << endl;
    cout << "Integer Division: " << intCalc.divide(15, 2) << endl;

    calculator<double> doubleCalc;
    cout << "Double Addition: " << doubleCalc.add(15.15, 2.2, 3.3) << endl;
    cout << "Double Subtraction: " << doubleCalc.subtract(15.15, 2.2, 3.3) << endl;
    cout << "Double Multiplication: " << doubleCalc.multiply(15.15, 2.2, 3.3) << endl;
    cout << "Double Division: " << doubleCalc.divide(15.15, 2.2) << endl;

    return 0;
}