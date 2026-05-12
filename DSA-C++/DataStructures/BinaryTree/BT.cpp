#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
class BinaryTree{
    public:
    Node* root;
    BinaryTree(){
        root = NULL;
    }
    void insert(int val){
        if(root == NULL){
            root = new Node(val);
            return;
        }
        Node* temp = root;
        while(temp != NULL){
            if(val < temp->data){
                if(temp->left == NULL){
                    temp->left = new Node(val);
                    return;
                }
                temp = temp->left;
            }
            else{
                if(temp->right == NULL){
                    temp->right = new Node(val);
                    return;
                }
                temp = temp->right;
            }
        }
    }

    void deleteNode(int val){
        if(root == NULL){
            return;
        }
        Node* temp = root;
        Node* parent = NULL;
        while(temp != NULL && temp->data != val){
            parent = temp;
            if(val < temp->data){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        if(temp == NULL){
            return;
        }
    }
};