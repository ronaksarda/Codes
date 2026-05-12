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

    void insertAtStart(int val) {
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

    void insertAtEnd(int val) {
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
    }

    void insertAtPosition(int val, int pos) {
        if (pos == 1) {
            insertAtStart(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtStart() {
        if (head == NULL) return;

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* last = head;
        while (last->next != head) {
            last = last->next;
        }

        Node* temp = head;
        head = head->next;
        last->next = head;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == NULL) return;

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL) return;

        if (pos == 1) {
            deleteAtStart();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        for (int i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete temp;
    }

    void display() {
        if (head == NULL) return;

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtStart(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.insertAtPosition(15, 2);

    cll.display();

    cll.deleteAtStart();
    cll.deleteAtEnd();
    cll.deleteAtPosition(2);

    cll.display();

    return 0;
}