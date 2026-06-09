#include <bits/stdc++.h>
using namespace std;

struct Calculator {
    template<typename T, typename... Args>
    T add(T first, Args... args) {
        return (first + ... + args);
    }

    template<typename T, typename... Args>
    T subtract(T first, Args... args) {
        return (first - ... - args);
    }

    template<typename T, typename... Args>
    T multiply(T first, Args... args) {
        return (first * ... * args);
    }

    template<typename T, typename... Args>
    bool divide(double &result, T first, Args... args) {
        if (((args == 0) || ...)) {
            return false;
        }
        result = (static_cast<double>(first) / ... / static_cast<double>(args));
        return true;
    }

    template<typename... Args>
    void calculate(int choice, Args... args) {
        switch (choice) {
            case 1:
                cout << "Result = " << add(args...) << "\n";
                break;
            case 2:
                cout << "Result = " << subtract(args...) << "\n";
                break;
            case 3:
                cout << "Result = " << multiply(args...) << "\n";
                break;
            case 4: {
                double result;
                if (divide(result, args...)) {
                    cout << "Result = " << result << "\n";
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            }
            default:
                cout << "Invalid choice.\n";
        }
    }

    void run() {
        int choice, count;
        double a, b, c, d;

        do {
            cout << "\n===== MENU DRIVEN VARIADIC CALCULATOR =====\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 5) {
                cout << "Exiting program...\n";
                break;
            }

            if (choice < 1 || choice > 5) {
                cout << "Invalid choice. Try again.\n";
                continue;
            }

            cout << "How many numbers do you want to use (2-4)? ";
            cin >> count;

            switch (count) {
                case 2:
                    cout << "Enter 2 numbers: ";
                    cin >> a >> b;
                    calculate(choice, a, b);
                    break;

                case 3:
                    cout << "Enter 3 numbers: ";
                    cin >> a >> b >> c;
                    calculate(choice, a, b, c);
                    break;

                case 4:
                    cout << "Enter 4 numbers: ";
                    cin >> a >> b >> c >> d;
                    calculate(choice, a, b, c, d);
                    break;

                default:
                    cout << "Please enter only 2 to 4 numbers.\n";
            }

        } while (true);
    }
};

int main() {
    Calculator calc;
    calc.run();
    return 0;
}