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
        
        void insert(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = NULL;
            
            if(head == NULL){
                head = newNode;
            } else {
                Node* temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
        
        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void multiply_by_2(){
            LinkedList multipliedlist;
            Node* temp = head;
            
            while(temp != NULL){
                int newValue = temp->data * 2;
                multipliedlist.insert(newValue);
                temp = temp->next;
            }
            cout << "New Linked List multiplied by 2: ";
            multipliedlist.display();
        }
};

int main(){
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    
    cout << "Original List: ";
    list.display();
    
    list.multiply_by_2();
    
    return 0;
}
