#include<iostream>
#include<vector>
using namespace std;

class Queue{
    private:
        vector<int> v;
        int front;
        int rear;
        int size;
    public:
        Queue(int s){
            size = s;
            front = -1;
            rear = -1;
            v.resize(size);
        }
        void enqueue(int x){
            if((rear + 1) % size == front){
                cout << "Queue is full" << endl;
                return;
            }
            rear = (rear + 1) % size;
            v[rear] = x;
            if(front == -1){
                front = rear;
            }
        }
        void dequeue(){
            if(front == -1){
                cout << "Queue is empty" << endl;
                return;
            }
            if(front == rear){
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % size;
            }
        }
        int peek(){
            if(front == -1){
                cout << "Queue is empty" << endl;
                return -1; // Return -1 to indicate queue is empty
            }
            return v[front];
        }
        bool isEmpty(){
            return front == -1;
        }
};

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout << "Front element: " << q.peek() << endl; 
    q.dequeue();
    cout << "Front element after dequeue: " << q.peek() << endl; 
    q.enqueue(6); 
    return 0;
}
