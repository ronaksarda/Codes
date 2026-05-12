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
            head = NULL;
        }
        void insert(int value,int position){
            Node* newNode = new Node();
            newNode->data = value;
            if(position == 1){
                newNode->next = head;
                head = newNode;
                return;
            }
            Node* temp = head;
            int count =1;
            while(temp != NULL && count < position-1){
                temp = temp->next;
                count++;
            }
            if(temp == nullptr){
                cout << "Invalid Position" << endl;
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        void delete_element(int value){
            if(head == nullptr){
                cout <<"Empty Linked List" << endl;
                return;
            }
            if(head->data == value){
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }
            Node* current = head;
            Node* prev = nullptr;
            while(current != nullptr && current->data != value){
                prev = current;
                current = current->next;
            }
            if(current == nullptr){
                cout << "Value not found in the list" << endl;
                return;
                }
            prev->next = current->next;
            delete current;
        }
        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};
int main(){
    LinkedList list;
    list.insert(10,1);
    list.insert(20,2);
    list.insert(30,3);
    list.insert(15,4);
    cout << "Linked List after insertion: ";
    list.display(); // This will now show: 10 20 30 15 

    list.delete_element(10);
    list.delete_element(30);

    cout << "Linked List after deletions: ";
    list.display(); 

    return 0;
}