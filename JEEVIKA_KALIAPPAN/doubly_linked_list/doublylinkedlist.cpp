#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

Node* head = nullptr;
Node* tail = nullptr;

void insertAtBeginning(int val) {
    Node* newNode = new Node(val);

    newNode->next = head;

    if (head == nullptr) {
        tail = newNode;
    }
    else {
        head->prev = newNode;
    }

    head = newNode;

    cout << "\nInserted " << val << " at the beginning";
}

void display() {
    if (head == nullptr) {
        cout << "\nList is empty";
        return;
    }

    Node* temp = head;

    cout << "\nElements in the list are: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void displayRev() {
    if (tail == nullptr) {
        cout << "\nList is empty";
        return;
    }

    Node* temp = tail;

    cout << "\nElements in reverse: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

void insertAtPos(int pos, int val) {
    if (pos == 0) {
        insertAtBeginning(val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;

    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;

        if (temp == nullptr) {
            cout << "\nInvalid Position";
            delete newNode;
            return;
        }
    }

    newNode->next = temp->next;

    if (temp->next == nullptr)
        tail = newNode;
    else
        temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;

    cout << "\nInserted " << val << " at position " << pos;
}

void deleteAtPos(int pos) {
    if (head == nullptr) {
        cout << "\nList is empty";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    if (pos == 0) {
        head = head->next;

        if (head == nullptr)
            tail = nullptr;
        else
            head->prev = nullptr;

        cout << "\nDeleted " << temp->data;
        delete temp;
        return;
    }

    for (int i = 1; i <= pos; i++) {
        prev = temp;
        temp = temp->next;

        if (temp == nullptr) {
            cout << "\nInvalid Position";
            return;
        }
    }

    prev->next = temp->next;

    if (temp->next == nullptr)
        tail = prev;
    else
        temp->next->prev = prev;

    cout << "\nDeleted " << temp->data;

    delete temp;
}

int main() {

    insertAtBeginning(4);
    insertAtBeginning(7);
    insertAtBeginning(9);

    display();

    deleteAtPos(1);

    display();

    displayRev();

    cout << endl;

    return 0;
}

/*
loop- O(n)
O(1)

insertAtEnd
deleteAtEnd
deleteAtBeginning
search
contains
length

*/
/*
doubly linked list
--easy to bidirectional traversal
--it has node=previous,data,ptr
--it use more memory

*/