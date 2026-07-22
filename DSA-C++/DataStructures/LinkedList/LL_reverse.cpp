//Reversing a linked list
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList {
    private: 
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }

        void insert(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr;
            if(head == nullptr){
                head = newNode;
            } 
            else {
                Node* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        void display(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }   

        void reverse(){
            Node* prev = nullptr;
            Node* curr = head;
            Node* next = nullptr;
            while(curr != nullptr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
        }
};

int main(){
    LinkedList list;
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> value;
        list.insert(value);
    }
    cout << "Original List: ";
    list.display();
    list.reverse();
    cout << "Reversed List: ";
    list.display();
    return 0;
}