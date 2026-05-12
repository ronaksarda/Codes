#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
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
    }

    void display() {
        if (head == nullptr) return;

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
    Cl1.insertAtEnd(30);
    Cl1.insertAtEnd(29);
    Cl1.insertAtEnd(20);

    cout << "Circular Linked List: ";
    Cl1.display();

    return 0;
}