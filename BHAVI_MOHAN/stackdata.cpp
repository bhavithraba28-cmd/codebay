#include <iostream>
using namespace std;

const int MAX = 5;

struct Stack
{
    int arr[MAX];
    int top;
};

void initial(Stack &s)
{
    s.top = -1;
}

bool isFull(Stack &s)
{
    return s.top == MAX - 1;
}

bool isEmpty(Stack &s)
{
    return s.top == -1;
}

void push(Stack &s, int value)
{
    if (isFull(s))
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    s.top++;
    s.arr[s.top] = value;
    cout << value << " inserted into stack" << endl;
}

void pop(Stack &s)
{
    if (isEmpty(s))
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << s.arr[s.top] << " deleted from stack" << endl;
    s.top--;
}

void peek(Stack &s)
{
    if (isEmpty(s))
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Top element is: " << s.arr[s.top] << endl;
}

void display(Stack &s)
{
    if (isEmpty(s))
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements are:" << endl;
    for (int i = s.top; i >= 0; i--)
    {
        cout << s.arr[i] << endl;
    }
}

int main()
{
    Stack s;
    initial(s);

    int choice, value;

    do
    {
        cout << "\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(s, value);
                break;

            case 2:
                pop(s);
                break;

            case 3:
                peek(s);
                break;

            case 4:
                display(s);
                break;

            case 5:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    }
    while (choice != 5);

    return 0;
}
