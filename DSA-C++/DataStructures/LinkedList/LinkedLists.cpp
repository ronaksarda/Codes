#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedLists{
    private: 
        Node* head;
    public:
        LinkedLists(){
            head = nullptr; 
        }

        void addAtStart(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = head;
            head = newNode;
        }

        void addAtEnd(int value) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr; 
            if (head == nullptr) {
                head = newNode;
                return;
            }
                Node* temp = head;
                while (temp->next != nullptr) { 
                temp = temp->next;
            }

                temp->next = newNode;
        }
        void display(){
            Node* temp =head;
            if(temp == nullptr){
                cout <<" List is empty!";
                return;
            }
            while( temp != nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }   
        void AddElements(){
            Node* temp = head;
            int sum=0;
            while( temp != nullptr){
                sum += temp->data;
                temp = temp->next;
            }
            cout << "Sum of List elements: " << sum << endl;
        }
};


int main(){
    cout << " Linked List " << endl;
    LinkedLists list;
    int n;
    cout << "Enter List size: ";
    cin>>n;
    cout << "Add element from start:"<<endl;
        for(int i = 0 ; i < n/2 ;i++){
        int value=0;
        cin >> value;
        list.addAtStart(value);
    }   
    cout << "Add element from end:"<<endl;
    for(int i = n/2 ; i < n ;i++){
        int value=0;
        cin >> value;
        list.addAtEnd(value);
    }   
    list.display();
    list.AddElements();
    return 0;
}