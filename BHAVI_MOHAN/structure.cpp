#include <bits/stdc++.h>
using namespace std;

int main ()
{

struct list{
    string name;
    char grade;
    int id;
    int percen;
    string result;
};

list L1;
L1.name = "BHAVITHRA";
L1.id = 1;
L1.grade = 'A';
L1.percen = 90;

list L2;
L2.name = "MOHAN";
L2.id = 2;
L2.grade = 'D';
L2.percen = 50;

if (L1.percen >= 50)
    L1.result = "PASS";
else
    L1.result = "FAIL";

if (L2.percen >= 50)
    L2.result = "PASS";
else
    L2.result = "FAIL";

cout << "id:" << L1.id << " name:" << L1.name << " grade:" << L1.grade 
     << " percentage:" << L1.percen << " result:" << L1.result << endl << endl;

cout << "id:" << L2.id << " name:" << L2.name << " grade:" << L2.grade 
     << " percentage:" << L2.percen << " result:" << L2.result << endl << endl;

return 0;
}