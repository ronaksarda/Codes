//Reversing half the linked list
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
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
        
        void reverse_half(int size){
            if(size <=1){
                cout << "Linked List too short to reverse half" << endl;
                return;
            }
            int mid = size/2;
            Node* temp = head;
            Node* prev = nullptr;
            Node* next = nullptr;
            int count = 0;
            while(temp != nullptr && count < mid){
                next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
                count++;
            }
            if(head != nullptr){
                head->next = temp;
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
    list.reverse_half(n);
    cout << "List after reversing half: ";
    list.display();
    return 0;
}