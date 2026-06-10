/*using bst inserted node of 99 contact, search and parent node with time complexity for search, execution and insertion
*/
#include<bits/stdc++.h>
#include <chrono>
using namespace std;
struct contact
{
    string name;
    string phonenum;
    string email;
    contact* left;
    contact* right;
};
contact* root = nullptr;
void insert(string name, string phonenum, string email)
{
    contact* newcontact = new contact();
    newcontact->name = name;
    newcontact->phonenum = phonenum;
    newcontact->email = email;
    newcontact->left = nullptr;
    newcontact->right = nullptr;
    if(root == nullptr)
    {
        root = newcontact;
        return;
    }

    contact* temp = root;
    while(true)
    {
        if(name < temp->name)
        {
            if(temp->left == nullptr)
            {
                temp->left = newcontact;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if(temp->right == nullptr)
            {
                temp->right = newcontact;
                return;
            }
            temp = temp->right;
        }
    }
}
void inorder(contact* temp)
{
    if(temp == nullptr)
        return;

    inorder(temp->left);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    inorder(temp->right);
}
void preorder(contact* temp)
{
    if(temp == nullptr)
        return;
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(contact* temp)
{
    if(temp == nullptr)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout << "Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
}
void display()
{
    cout << "Inorder: " << endl;
    inorder(root);
    cout << "\nPreorder: " << endl; 
    preorder(root);
    cout<<"\nPostorder: " << endl;
    postorder(root);
}
void search(contact* temp, string key)
{
    if(temp == nullptr)
    {
        cout << "Contact not found\n";
        return;
    }
    if(temp->name == key)
    {
        cout << "Contact found: Name: " << temp->name << ", Phone: " << temp->phonenum << ", Email: " << temp->email << endl;
        return;
    }
    if(key < temp->name)
      search(temp->left, key);
    else
       search(temp->right, key);
}

int main()
{
      auto start = chrono::high_resolution_clock::now();
        insert("Person1","99-001-0001","person1@example.com");
        insert("Person2","99-002-0002","person2@example.com");
        insert("Person3","99-003-0003","person3@example.com");
        insert("Person4","99-004-0004","person4@example.com");
        insert("Person5","99-005-0005","person5@example.com");
        insert("Person6","99-006-0006","person6@example.com");
        insert("Person7","99-007-0007","person7@example.com");
        insert("Person8","99-008-0008","person8@example.com");
        insert("Person9","99-009-0009","person9@example.com");
        insert("Person10","99-010-0010","person10@example.com");
        insert("Person11","99-011-0011","person11@example.com");
        insert("Person12","99-012-0012","person12@example.com");
        insert("Person13","99-013-0013","person13@example.com");
        insert("Person14","99-014-0014","person14@example.com");
        insert("Person15","99-015-0015","person15@example.com");
        insert("Person16","99-016-0016","person16@example.com");
        insert("Person17","99-017-0017","person17@example.com");
        insert("Person18","99-018-0018","person18@example.com");
        insert("Person19","99-019-0019","person19@example.com");
        insert("Person20","99-020-0020","person20@example.com");
        insert("Person21","99-021-0021","person21@example.com");
        insert("Person22","99-022-0022","person22@example.com");
        insert("Person23","99-023-0023","person23@example.com");
        insert("Person24","99-024-0024","person24@example.com");
        insert("Person25","99-025-0025","person25@example.com");
        insert("Person26","99-026-0026","person26@example.com");
        insert("Person27","99-027-0027","person27@example.com");
        insert("Person28","99-028-0028","person28@example.com");
        insert("Person29","99-029-0029","person29@example.com");
        insert("Person30","99-030-0030","person30@example.com");
        insert("Person31","99-031-0031","person31@example.com");
        insert("Person32","99-032-0032","person32@example.com");
        insert("Person33","99-033-0033","person33@example.com");
        insert("Person34","99-034-0034","person34@example.com");
        insert("Person35","99-035-0035","person35@example.com");
        insert("Person36","99-036-0036","person36@example.com");
        insert("Person37","99-037-0037","person37@example.com");
        insert("Person38","99-038-0038","person38@example.com");
        insert("Person39","99-039-0039","person39@example.com");
        insert("Person40","99-040-0040","person40@example.com");
        insert("Person41","99-041-0041","person41@example.com");
        insert("Person42","99-042-0042","person42@example.com");
        insert("Person43","99-043-0043","person43@example.com");
        insert("Person44","99-044-0044","person44@example.com");
        insert("Person45","99-045-0045","person45@example.com");
        insert("Person46","99-046-0046","person46@example.com");
        insert("Person47","99-047-0047","person47@example.com");
        insert("Person48","99-048-0048","person48@example.com");
        insert("Person49","99-049-0049","person49@example.com");
        insert("Person50","99-050-0050","person50@example.com");
        insert("Person51","99-051-0051","person51@example.com");
        insert("Person52","99-052-0052","person52@example.com");
        insert("Person53","99-053-0053","person53@example.com");
        insert("Person54","99-054-0054","person54@example.com");
        insert("Person55","99-055-0055","person55@example.com");
        insert("Person56","99-056-0056","person56@example.com");
        insert("Person57","99-057-0057","person57@example.com");
        insert("Person58","99-058-0058","person58@example.com");
        insert("Person59","99-059-0059","person59@example.com");
        insert("Person60","99-060-0060","person60@example.com");
        insert("Person61","99-061-0061","person61@example.com");
        insert("Person62","99-062-0062","person62@example.com");
        insert("Person63","99-063-0063","person63@example.com");
        insert("Person64","99-064-0064","person64@example.com");
        insert("Person65","99-065-0065","person65@example.com");
        insert("Person66","99-066-0066","person66@example.com");
        insert("Person67","99-067-0067","person67@example.com");
        insert("Person68","99-068-0068","person68@example.com");
        insert("Person69","99-069-0069","person69@example.com");
        insert("Person70","99-070-0070","person70@example.com");
        insert("Person71","99-071-0071","person71@example.com");
        insert("Person72","99-072-0072","person72@example.com");
        insert("Person73","99-073-0073","person73@example.com");
        insert("Person74","99-074-0074","person74@example.com");
        insert("Person75","99-075-0075","person75@example.com");
        insert("Person76","99-076-0076","person76@example.com");
        insert("Person77","99-077-0077","person77@example.com");
        insert("Person78","99-078-0078","person78@example.com");
        insert("Person79","99-079-0079","person79@example.com");
        insert("Person80","99-080-0080","person80@example.com");
        insert("Person81","99-081-0081","person81@example.com");
        insert("Person82","99-082-0082","person82@example.com");
        insert("Person83","99-083-0083","person83@example.com");
        insert("Person84","99-084-0084","person84@example.com");
        insert("Person85","99-085-0085","person85@example.com");
        insert("Person86","99-086-0086","person86@example.com");
        insert("Person87","99-087-0087","person87@example.com");
        insert("Person88","99-088-0088","person88@example.com");
        insert("Person89","99-089-0089","person89@example.com");
        insert("Person90","99-090-0090","person90@example.com");
        insert("Person91","99-091-0091","person91@example.com");
        insert("Person92","99-092-0092","person92@example.com");
        insert("Person93","99-093-0093","person93@example.com");
        insert("Person94","99-094-0094","person94@example.com");
        insert("Person95","99-095-0095","person95@example.com");
        insert("Person96","99-096-0096","person96@example.com");
        insert("Person97","99-097-0097","person97@example.com");
        insert("Person98","99-098-0098","person98@example.com");
        insert("Person99","99-099-0099","person99@example.com");
        insert("Person100", "99-100-0100", "person100@example.com");
        auto end = chrono::high_resolution_clock::now();
        cout<<"Insertion Time: "<< chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns\n";
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
        cout<<"\nExecution Time: " << duration.count() << " microseconds" << endl;
        display();
        search(root, "Person50");
        search(root, "Person72");
        search(root, "Person11");
        end = chrono::high_resolution_clock::now();
        cout << "Search Time: " << chrono::duration_cast<chrono::nanoseconds>(end - start).count()<< " ns\n";
        return 0;
}
