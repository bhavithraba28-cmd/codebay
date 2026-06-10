#include <iostream>
using namespace std;
class pointer {
public:
    void swap() {
        int a = 24;
        int b = 50;
        int temp = 0;
        int* ptr1 = &a;
        int* ptr2 = &b;
        cout << "Before swap:"<<"a " << *ptr1 <<" b " << *ptr2 << endl;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        cout << "After swap: " <<"a "<< * ptr1 <<" b "<< * ptr2 << endl;
    }
    void arr() {
        int num;
        cout << "Enter the number of students: ";
        cin >> num;
        int* a = new int[num];
        cout << "Enter "<<num<<"Numbers: ";
        for (int i = 0; i < num;i++) {
            cin >> a[i];
        }
        for (int i = 0; i < num; i++) {
            cout << a[i] << " ";
        }
        return;
    }
};
int main()
{
    pointer obj;
    pointer* ptr = &obj;
    ptr->swap();
    ptr->arr();
    return 0;
}