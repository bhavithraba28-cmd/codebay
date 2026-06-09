#include <iostream>
using namespace std;

class book{
protected:
    string author;
    string title;
    int price;
    int model;

public:
    void displaybook()
    {
        cout << "Enter author: ";
        cin >> author;

        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter model: ";
        cin >> model;
    }

    void discount()
    {
        if (model > 2000)
            cout << "Apply 50% discount" << endl;
        else
            cout << "Apply 10% discount" << endl;
    }
};

int main()
{
    book b;

    b.displaybook();
    b.discount();
    b.displaybook();
    b.discount();
    b.displaybook();
    b.discount();

    return 0;
}