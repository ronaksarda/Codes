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
            cout << "Empty List";
        }
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteDuplicate() {
        if (head == nullptr) return;

        Node* current = head;
        int sum = 0;
        //2 pointer approach
        // Pick each element one by one
        while (current != nullptr && current->next != nullptr) {
            Node* runner = current;

            // Compare 'current' with the rest of the elements
            while (runner->next != nullptr) {
                if (current->data == runner->next->data) {
                    Node* duplicate = runner->next;
                    sum += duplicate->data;
                    
                    // Unlink the duplicate node
                    runner->next = runner->next->next;
                    delete duplicate;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
        cout << "Sum of deleted duplicate values: " << sum << endl;
    }
};

int main() {
    LinkedList list;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insert(value);
    }

    cout << "Original List: ";
    list.display();

    list.deleteDuplicate();

    cout << "List after deleting all duplicates: ";
    list.display();

    return 0;
}