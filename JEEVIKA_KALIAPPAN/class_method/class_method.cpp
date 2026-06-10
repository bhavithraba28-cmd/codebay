#include <iostream>
#include<string>
using namespace std;
class student {
public:
	int roll_no;
	string name;
	//function inside the class
	void display() {                             //function defination
		cout << "Name: " << name << endl;
		cout << "Roll_no: " << roll_no << endl;
	}
};
int main()
{
	student jeevi;
	jeevi.roll_no = 1;
	jeevi.name = "Jevika K";
	jeevi.display();
	return 0;
}
/*
class student {                               //second type of function and class method
public:
	int roll_no;
	string name;
	void display();                           //function declare
};
void student::display() {                             //function define
		cout << "Name: " << name << endl;
		cout << "Roll_no: " << roll_no << endl;
	}
	int main()
{
	student jeevi;
	jeevi.roll_no = 1;
	jeevi.name = "Jevika K";
	jeevi.display();
	return 0;
}
*/
