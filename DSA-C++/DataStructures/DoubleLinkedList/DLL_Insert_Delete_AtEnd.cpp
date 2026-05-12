#include <iostream>
using namespace std;

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

// 1. Insert at the End
void InsertAtEnd(int val) {
    Node* newNode = new Node(val);
    
    // Case 1: List is empty
    if (head == nullptr) {
        head = newNode;
        cout << "Inserted " << val << " as the first node." << endl;
        return;
    }

    // Case 2: Traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Link the last node and the new node
    temp->next = newNode;
    newNode->prev = temp;
    
    cout << "Inserted " << val << " at the end." << endl;
}

// 2. Delete from the End
void DeleteAtEnd() {
    // Case 1: List is empty
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // Case 2: Only one node in the list
    if (head->next == nullptr) {
        cout << "Deleted: " << head->data << endl;
        delete head;
        head = nullptr;
        return;
    }

    // Case 3: Traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Disconnect the last node
    cout << "Deleted: " << temp->data << endl;
    temp->prev->next = nullptr; 
    delete temp;
}

void Display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    Display(); // Output: 10 <-> 20 <-> 30 <-> NULL

    DeleteAtEnd();
    Display(); // Output: 10 <-> 20 <-> NULL

    return 0;
}
