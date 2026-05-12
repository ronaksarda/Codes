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

Node* head = nullptr;

void InsertAtPosition(int val, int pos) {
    if (pos < 1) return;
    
    if (pos == 1) {
        Node* newNode = new Node(val);
        if (head != nullptr) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) return;

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void DeleteValue(int val) {
    if (head == nullptr) return;

    Node* curr = head;
    while (curr != nullptr && curr->data != val) {
        curr = curr->next;
    }

    if (curr == nullptr) return;

    if (curr == head) {
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
    } else {
        if (curr->prev != nullptr) {
            curr->prev->next = curr->next;
        }
        if (curr->next != nullptr) {
            curr->next->prev = curr->prev;
        }
    }
    delete curr;
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
    InsertAtPosition(10, 1);
    InsertAtPosition(20, 2);
    InsertAtPosition(30, 3);
    InsertAtPosition(15, 2);
    
    cout << "List after insertions: ";
    Display();

    DeleteValue(15);
    cout << "List after deleting 15: ";
    Display();

    DeleteValue(10);
    cout << "List after deleting 10: ";
    Display();

    return 0;
}
