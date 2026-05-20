#include<iostream>
using namespace std;
class Stack{
    int top;
    int arr[100];
    public:
    Stack(){ top = -1; }
    void push(int x){
        if(top < 99){
            arr[++top] = x;
        } else {
            cout << "Stack overflow\n";
        }
    }
    void pop(){
        if(!isEmpty()){
            top--;
        } else {
            cout << "Stack underflow\n";
        }
    }
    int peek(){
        if(!isEmpty()){
            return arr[top];
        } else {
            cout << "Stack is empty\n";
            return -1;
        }
    }   
    bool isEmpty(){
        return top == -1;
    }
};