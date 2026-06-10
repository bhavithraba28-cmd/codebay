#include <iostream>
#include<string>
using namespace std;
class operation {
public:
	int count = 0;
	string name = "jeevika";
	void reverse() {
		cout << "reversed: ";
		for (int i = name.length() - 1; i >=0; i--) {
			cout << name[i] << endl;
		}
	}
	void palindrome() {
		for (int i = 0; i < name.length() / 2; i++) {
			if (name[i] != name[name.length() - 1 - i]) {
				cout << "not palindrome"<<endl;
				return;
			}
		}
		cout << "palindrome"<<endl;
		return;
	}
	void vowels() {
		for (int i = 0; i < name.length(); i++) {
			if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
				cout << "vowels present here " << name[i] << endl;
				count++;
			}
		}
		cout << "count" << count << endl;
	}
};
int main()
{
	operation obj;
	obj.reverse();
	obj.palindrome();
	obj.vowels();
	return 0;
}