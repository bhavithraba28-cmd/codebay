#include <bits/stdc++.h>
using namespace std;

struct babycare
{
    int baby_number;
    string mother_name;
    string father_name;
    float weight;
    int height;
    babycare* next;
};

babycare* babycarehead = nullptr;

string weightstatus(float weight)
{
    if (weight < 2.5f)
    {
        return "Low birth weight baby.";
    }

    if (weight > 4.0f)
    {
        return "High birth weight baby.";
    }

    return "Normal birth weight.";
}

void addbaby()
{
    babycare* b = new babycare{};

    cout << "Enter baby number: " << endl;
    cin >> b->baby_number;

    if (cin.fail())
    {
        cout << "Invalid baby number." << endl;
        cin.clear();
        cin.ignore();
        delete b;
        return;
    }

    babycare* current = babycarehead;
    while (current != nullptr)
    {
        if (current->baby_number == b->baby_number)
        {
            cout << "Baby with this number already exists." << endl;
            delete b;
            return;
        }
        current = current->next;
    }

    cin.ignore();

    cout << "Enter mother name: " << endl;
    getline(cin, b->mother_name);

    cout << "Enter father name: " << endl;
    getline(cin, b->father_name);

    cout << "Enter weight: " << endl;
    cin >> b->weight;

    cout << "Enter height: " << endl;
    cin >> b->height;

    if (cin.fail())
    {
        cout << "Invalid weight or height." << endl;
        cin.clear();
        cin.ignore();
        delete b;
        return;
    }

    if (b->weight <= 0 || b->height <= 0)
    {
        cout << "Weight and height must be positive values." << endl;
        cin.ignore();
        delete b;
        return;
    }

    if (b->weight < 1.0f || b->weight > 6.0f)
    {
        cout << "Entered weight looks unrealistic for a newborn." << endl;
        cin.ignore();
        delete b;
        return;
    }

    if (b->height < 30 || b->height > 70)
    {
        cout << "Entered height looks unrealistic for a newborn." << endl;
        cin.ignore();
        delete b;
        return;
    }

    b->next = babycarehead;
    babycarehead = b;

    cout << weightstatus(b->weight) << endl;
    cout << "Baby record added successfully." << endl;
}

void display()
{
    babycare* current = babycarehead;

    if (current == nullptr)
    {
        cout << "No baby records found." << endl;
        return;
    }

    while (current != nullptr)
    {
        cout << "TODAY BORN BABY NUMBER: " << current->baby_number << endl;
        cout << "BABY'S MOTHER NAME: " << current->mother_name << endl;
        cout << "BABY'S FATHER NAME: " << current->father_name << endl;
        cout << "BABY'S WEIGHT: " << current->weight << " kg" << endl;
        cout << "BABY'S HEIGHT: " << current->height << " cm" << endl;
        cout << "WEIGHT STATUS: " << weightstatus(current->weight) << endl;
        cout << "-----------------------------" << endl;
        current = current->next;
    }
}

void freerecords()
{
    while (babycarehead != nullptr)
    {
        babycare* temp = babycarehead;
        babycarehead = babycarehead->next;
        delete temp;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Add Baby Record" << endl;
        cout << "2. Display Baby Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cout << "Invalid choice. Please enter a number." << endl;
            cin.clear();
            cin.ignore();
            continue;
        }

        cin.ignore();

        switch (choice)
        {
            case 1:
                addbaby();
                break;
            case 2:
                display();
                break;
            case 3:
                cout << "Exiting program....." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
                break;
        }
    }
    while (choice != 3);

    freerecords();
    return 0;
}
/*code for babycare to determine baby is helathy using structure for understanding
*/
