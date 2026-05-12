#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Global head pointer
Node* head = nullptr;

// 1. Insert at the start
void InsertAtStart(int val) {
    Node* newNode = new Node(val);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    cout << "Inserted: " << val << endl;
}

// 2. Delete from the start
void DeleteAtStart() {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    cout << "Deleted: " << temp->data << endl;

    head = head->next; // Move head to the next node

    if (head != nullptr) {
        head->prev = nullptr; // Remove link to the deleted node
    }

    delete temp; // Free memory
}

// Helper function to see the results
void Display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    InsertAtStart(10);
    InsertAtStart(20);
    InsertAtStart(30);
    
    Display(); // Output: 30 <-> 20 <-> 10 <-> NULL

    DeleteAtStart();
    Display(); // Output: 20 <-> 10 <-> NULL

    return 0;
}
