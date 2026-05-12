#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Recursive Traversals
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level-order Insertion
Node* insertLevelOrder(Node* root, int data) {
    if (!root) return new Node(data);
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (!temp->left) {
            temp->left = new Node(data);
            return root;
        } else q.push(temp->left);
        
        if (!temp->right) {
            temp->right = new Node(data);
            return root;
        } else q.push(temp->right);
    }
    return root;
}

// Visual Level-by-Level Printing
void printLevelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        while (levelSize--) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << endl;
    }
}

int main() {
    Node* root = nullptr;
    int arr[] = {10, 20, 30, 40, 50, 60};
    for(int x : arr) root = insertLevelOrder(root, x);

    cout << "Level-order Structure:\n";
    printLevelOrder(root);

    cout << "\nPreorder: "; preorder(root);
    cout << "\nInorder: "; inorder(root);
    cout << "\nPostorder: "; postorder(root);
    
    return 0;
}
