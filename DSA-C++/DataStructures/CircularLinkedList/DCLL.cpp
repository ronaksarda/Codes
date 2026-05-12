#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyCircularLinkedList {
    Node* head;

public:
    DoublyCircularLinkedList() : head(nullptr) {}

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
            newNode->prev = head;
            return;
        }

        Node* last = head->prev;

        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
    }

    void deleteNode(int key) {
        if (!head) return;

        Node *curr = head, *prev_node = nullptr;
        while (curr->data != key) {
            if (curr->next == head) {
                cout << "Node not found.\n";
                return;
            }
            prev_node = curr;
            curr = curr->next;
        }

        // Only one node in the list
        if (curr->next == head && curr->prev == head) {
            head = nullptr;
            delete curr;
            return;
        }

        if (curr == head) {
            Node* last = head->prev;
            head = head->next;
            last->next = head;
            head->prev = last;
        } else {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }
        delete curr;
    }

    void displayForward() {
        if (!head) return;
        Node* temp = head;
        cout << "Forward: ";
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(Head)" << endl;
    }

    void displayBackward() {
        if (!head) return;
        Node* last = head->prev;
        Node* temp = last;
        cout << "Backward: ";
        do {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != last);
        cout << "(Last)" << endl;
    }
};

int main() {
    DoublyCircularLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.displayForward();
    list.displayBackward();

    cout << "Deleting 30..." << endl;
    list.deleteNode(30);
    list.displayForward();

    cout << "Deleting 10 (Head)..." << endl;
    list.deleteNode(10);
    list.displayForward();
    list.displayBackward();

    return 0;
}
