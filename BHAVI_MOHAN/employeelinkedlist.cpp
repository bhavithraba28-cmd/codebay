#include <bits/stdc++.h>
using namespace std;
struct employee
{
    int id;
    string name;
    float base_sal;
    float salary;
    float total_salary;
    int age;
    float years_of_experience;
    employee* next;
};
struct employer
{
    int company_id;
    string company_name;
    string company_location;
    employer* next;
};
employer* employerhead = nullptr;
employee* employeehead = nullptr;
int next_employee_id = 1001;

void assignsalaries(employee* e)
{
    if (e == nullptr)
    {
        return;
    }
    if (e->years_of_experience >= 50)
    {
        e->salary = 54000;
        e->base_sal = 11000;
    }
    else if (e->years_of_experience >= 40)
    {
        e->salary = 45000;
        e->base_sal = 9000;
    }
    else if (e->years_of_experience >= 30)
    {
        e->salary = 33000;
        e->base_sal = 8000;
    }
    else if (e->years_of_experience >= 20)
    {
        e->salary = 25000;
        e->base_sal = 7000;
    }
    else if (e->years_of_experience >= 10)
    {
        e->salary = 14000;
        e->base_sal = 6000;
    }
    else
    {
        e->salary = 7000;
        e->base_sal = 5000;
    }
 e->total_salary = e->base_sal + e->salary;
}
void updateallsalaries()
{
    employee* temp = employeehead;

    while (temp != nullptr)
    {
        assignsalaries(temp);
        temp = temp->next;
    }
}
employee* findemployee(int id)
{
    employee* temp = employeehead;

    while (temp != nullptr)
    {
        if (temp->id == id)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}
employer* findemployer(int company_id)
{
    employer* temp = employerhead;
    while (temp != nullptr)
    {
        if (temp->company_id == company_id)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}
int addemployee()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    if (cin.fail() || n <= 0)
    {
        cout << "Invalid number of employees." << endl;
        cin.clear();
        cin.ignore();
        return 1;
    }
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        employee* e = new employee{};
        e->id = next_employee_id++;
        e->next = nullptr;

        cout << "\nEmployee " << i + 1 << endl;
        cout << "Assigned ID: " << e->id << endl;

        cout << "Enter name of employee: ";
        getline(cin, e->name);

        cout << "Enter age: ";
        cin >> e->age;
        if (cin.fail() || e->age < 18 || e->age > 65) 
    {   cout << "Invalid age. Please enter a value between 18 and 65." << endl;
            cin.clear();
            cin.ignore();
            delete e;
            return 1; }
        cout << "Enter years of experience: ";
        cin >> e->years_of_experience;
        if (cin.fail() || e->years_of_experience < 0 || e->years_of_experience > 50)
        {cout << "Invalid years of experience. Please enter a value between 0 and 50." << endl;
            cin.clear();
            cin.ignore();
            delete e;
            return 1;  }

        assignsalaries(e);
        cin.ignore();
        e->next = employeehead;
        employeehead = e;
    }
    return 0;
}
int addemployer()
{
    employer* e = new employer{};

    cout << "Enter company id: ";
    cin >> e->company_id;

    if (cin.fail())
    {
        cout << "Invalid company ID." << endl;
        cin.clear();
        cin.ignore();
        delete e;
        return 1;
    }
    if (findemployer(e->company_id) != nullptr)
    {
        cout << "Employer with this ID already exists." << endl;
        cin.ignore();
        delete e;
        return 1;
    }
    cin.ignore();
    cout << "Enter company name: ";
    getline(cin, e->company_name);
    cout << "Enter company location: ";
    getline(cin, e->company_location);
    e->next = employerhead;
    employerhead = e;
    return 0;
}
void viewemployee()
{
    employee* temp = employeehead;

    if (temp == nullptr)
    {
        cout << "No employees found." << endl;
        return;
    }
    while (temp != nullptr)
    {
        cout << "Employee ID: " << temp->id << endl;
        cout << "Employee Name: " << temp->name << endl;
        cout << "Employee Age: " << temp->age << endl;
        cout << "Years of Experience: " << temp->years_of_experience << endl;
        cout << "Base Salary: " << temp->base_sal << endl;
        cout << "Gratuity: " << temp->salary << endl;
        cout << "Total Salary: " << temp->total_salary << endl;
        cout << "-----------------------------" << endl;
        temp = temp->next; }
}
void viewemployer()
{
    employer* temp = employerhead;

    if (temp == nullptr)
    {
        cout << "No employers found." << endl;
        return;
    }
    while (temp != nullptr)
    {
        cout << "Company ID: " << temp->company_id << endl;
        cout << "Company Name: " << temp->company_name << endl;
        cout << "Company Location: " << temp->company_location << endl;
        cout << "-----------------------------" << endl;
        temp = temp->next; }
}
void freeemployees()
{
    while (employeehead != nullptr)
    {
        employee* temp = employeehead;
        employeehead = employeehead->next;
        delete temp; }
}
void freeemployers()
{
    while (employerhead != nullptr)
    {
        employer* temp = employerhead;
        employerhead = employerhead->next;
        delete temp;    }
}
int main()
{
    int choice;
    do
    {
        cout << "\n1. Add Employee" << endl;
        cout << "2. Add Employer" << endl;
        cout << "3. View Employees" << endl;
        cout << "4. View Employers" << endl;
        cout << "5. Update salaries" << endl;
        cout << "6. Exit" << endl;
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
                addemployee();
                break;
            case 2:
                addemployer();
                break;
            case 3:
                viewemployee();
                break;
            case 4:
                viewemployer();
                break;
            case 5:
                updateallsalaries();
                cout << "Salaries updated for all employees." << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    while (choice != 6);
    freeemployees();
    freeemployers();
    return 0;
}/*linked list for employee and employer to determine salary and grauitity for employees using structure

*/
