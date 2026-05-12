#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    void insertAtPosition(int val, int pos) {
    Node* newNode = new Node(val);

    if (pos == 1) {
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "head" << endl;
    }
};

int main() {
    CircularLinkedList Cl1;

    Cl1.insertAtPosition(10, 1);
    Cl1.insertAtPosition(20, 2);
    Cl1.insertAtPosition(30, 3);
    Cl1.insertAtPosition(81,5);

    Cl1.display();

    return 0;
}