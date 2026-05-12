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

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

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
    }

void display() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << " head " << endl;
    }
};

int main() {
    CircularLinkedList L1;

    L1.insertAtBeginning(2);
    L1.insertAtBeginning(3);
    L1.insertAtBeginning(5);
    cout << "Circular Linked List: ";
    L1.display();

    return 0;
}