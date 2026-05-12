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
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void avg(int size) {
    if (size <= 0 || head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    int first = head->data;
    int middle = 0, last = 0;

    for (int i = 0; i < size; i++) {
        if (i == size / 2) {
            middle = temp->data;
        }
        if (i == size - 1) {
            last = temp->data;
        }
        temp = temp->next;
    }

    double average = (double)(first + middle + last) / 3.0;
    
    cout << "First: " << first << " Middle: " << middle << " Last: " << last << endl;
    cout << "Average: " << average << endl;
}
};

int main(){
    LinkedList list;
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;
    if( n <= 1) {
        cout << "Number of elements must be greater than 1." << endl;
        return 1;
    }
    cout << "Enter the elements ";
    for(int i = 0; i < n; i++){
        cin >> value;
        list.insert(value);
    }
    list.display();
    list.avg(n);

}