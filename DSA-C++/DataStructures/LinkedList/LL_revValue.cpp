#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() { head = nullptr; }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverse_tillValue(int value) {
        if (head == nullptr) return;
        
        // 1. Check if value is at the head (nothing to reverse)
        if (head->data == value) return;

        //find target node and if not found return
        Node* target = head;
        bool found = false;
        while (target != nullptr) {
            if (target->data == value) {
                found = true;
                break;
            }
            target = target->next;
        }

        if (!found) {
            cout << "Value not found in the list" << endl;
            return;
        }

        //Reversing
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        Node* originalHead = head; //Head is saved to connect with the target after reversal

        while (curr != target) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        originalHead->next = target;
        head = prev;
    }
};

int main() {
    LinkedList list;
    int n, value, val;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insert(value);
    }
    list.display();
    cout << "Enter value: ";
    cin >> val;
    list.reverse_tillValue(val);
    list.display();

    return 0;
}