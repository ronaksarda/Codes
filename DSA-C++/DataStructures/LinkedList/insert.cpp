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
    list.insert(20,4);
    list.insert(30,3);
    list.insert(15,2);
    cout << "Linked List after insertion: ";
    list.display();
}