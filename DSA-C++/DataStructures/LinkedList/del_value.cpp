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

        void insert(int value, int position){
            Node* newNode = new Node();
            newNode->data = value;
            if(position == 1){
                newNode->next = head;
                head = newNode;
                return;
            }
            Node* temp = head;
            int count = 1;
            while(temp != NULL && count < position-1){
                temp = temp->next;
                count++;
            }
            if(temp == nullptr){
                delete newNode;
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void delete_from_beginning(){
            if(head == nullptr){
                cout << "List is empty" << endl;
                return;
            }

            Node* temp = head;
            int deletedValue = temp->data;
            head = head->next;
            delete temp;

            cout << "Deleted: " << deletedValue << endl;
            cout << "Updated List: ";
            display();
        }
        void delete_end(){
            if(!head) return;
            if(!head->next){
                delete head;
                head = nullptr;
                return;
            }
            Node* temp = head;
            Node* prev = nullptr;
            while(temp->next != nullptr){
                prev = temp;
                temp = temp->next;
            }
            prev->next = nullptr;
            delete temp;

        }

        void display(){
            Node* temp = head;
            if(temp == nullptr){
                cout << "Empty" << endl;
                return;
            }
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    LinkedList list;
    
    list.insert(10, 1);
    list.insert(20, 2);
    list.insert(30, 3);
    list.insert(40, 4);

    cout << "Initial List: ";
    list.display();

    list.delete_from_beginning();
    list.delete_from_beginning();
    list.delete_end();
    list.display();
    return 0;
}