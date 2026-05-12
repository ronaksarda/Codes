#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularQueue {
    Node* rear;

public:
    CircularQueue() : rear(nullptr) {}

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (!rear) {
            rear = newNode;
            rear->next = rear;
        } else {
            newNode->next = rear->next;
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued to queue." << endl;
    }

    void dequeue() {
        if (!rear) {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* front = rear->next;
        cout << front->data << " dequeued from queue." << endl;

        if (rear == front) {
            delete front;
            rear = nullptr;
        } else {
            rear->next = front->next;
            delete front;
        }
    }

    void display() {
        if (!rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = rear->next;
        cout << "Queue elements: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear->next);
        cout << endl;
    }

    ~CircularQueue() {
        while (rear) dequeue();
    }
};

int main() {
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(50);
    cq.display();

    return 0;
}
