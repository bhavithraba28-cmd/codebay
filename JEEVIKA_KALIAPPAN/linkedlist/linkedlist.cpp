#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {

    Node* head = nullptr;

public:

    void insertAtBeginning(int val) {

        Node* newNode = new Node;

        newNode->data = val;

        if (head == nullptr) {
            newNode->next = nullptr;
            head = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }

        cout << "Inserted " << val << " at the beginning" << endl;
    }

    void display() {

        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "Elements in the list are: ";

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void insertAtPos(int pos, int val) {

        Node* newNode = new Node;
        newNode->data = val;

        Node* temp = head;

        for (int i = 1; i <= pos - 1; i++) {

            temp = temp->next;

            if (temp == nullptr) {
                cout << "Invalid position" << endl;
                delete newNode;
                return;
            }
        }

        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Inserted " << val
            << " at position " << pos << endl;
    }

    void deleteAtPos(int pos) {

        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        if (pos == 0) {

            head = head->next;

            cout << "Deleted " << temp->data << endl;

            delete temp;
            return;
        }

        for (int i = 1; i <= pos; i++) {

            prev = temp;
            temp = temp->next;

            if (temp == nullptr) {
                cout << "Invalid position" << endl;
                return;
            }
        }

        prev->next = temp->next;

        cout << "Deleted " << temp->data << endl;

        delete temp;
    }
};

int main() {

    int choice, val, pos;

    LinkedList list1;
    LinkedList list2;

    while (true) {

        cout << "\n-------- Linked List Menu -----------\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Display the List\n";
        cout << "3. Insert at Specified Position\n";
        cout << "4. Delete from Specified Position\n";
        cout << "5. Exit\n";
        cout << "--------------------------------------\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

        case 1:

            cout << "Enter the data: ";
            cin >> val;

            list1.insertAtBeginning(val);
            break;

        case 2:

            list1.display();
            break;

        case 3:

            cout << "Enter the position (starts at 0): ";
            cin >> pos;

            if (pos < 0) {
                cout << "Invalid position" << endl;
                break;
            }

            cout << "Enter the data: ";
            cin >> val;

            if (pos == 0)
                list1.insertAtBeginning(val);
            else
                list1.insertAtPos(pos, val);

            break;

        case 4:

            cout << "Enter the position: ";
            cin >> pos;

            if (pos < 0) {
                cout << "Invalid position" << endl;
                break;
            }

            list1.deleteAtPos(pos);
            break;

        case 5:

            exit(0);

        default:

            cout << "Wrong choice" << endl;
        }
    }

    return 0;
}
/*
linkedlist
-array naley contigious memory allocation ahh irrukum ana linked list la stagged memory la irrukum 
-normal ahh array na int[]arr=new int[10] ithula enna disadvantage na ithula fixed size
-athey dynamic arrays na ithula new int[2*size] array la 10 fixed size complete agiruchina namba dynamic array use panalam
-so iothunala than namba linked list use pandrom
-ithula node-> data,refernce or pointers
class node{
    int data;
    node next;
}
head of the linked list
tail of the linked list
head node   it is the top node or 1st node
tail node is not compulsory but it is usefull and good one
types
-singlely
-doublely
-circular

to create the head node
----node*head;
linkedlist la indexing nu use seiya mudiyathu athavathu get(index) nu onu use seiya mudiyathu
namba ithala seiyanum na 
head->2000
head->next:2027
get (2) itha eppdi seiyanum na
function get(index)
node* ptr=head;
for(int i=0;i<index;i++){
   ptr=ptr->next;
   return ptr->data;
}

function set(index,value)
node* ptr=head;
for(int i=0;i<index;i++){
   ptr=ptr->next;
   ptr->data=value;
}


function search(value){
  node* ptr=head;
  while(ptr->next!=null){
    if(ptr->data==value){
      cout<<"found"<<endl;
    }
  }
  ptr=ptr.next;
}


traversal
insert
delete
update/read
insertAtBeginning

*/