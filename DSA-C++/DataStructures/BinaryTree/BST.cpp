#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// BST Insertion
Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Helper to find minimum value node
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left) current = current->left;
    return current;
}

// BST Deletion
Node* deleteNode(Node* root, int key) {
    if (!root) return root;

    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get inorder successor
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Construct Balanced BST from Sorted Array
Node* sortedArrayToBST(int arr[], int start, int end) {
    if (start > end) return nullptr;
    
    int mid = start + (end - start) / 2;
    Node* root = new Node(arr[mid]);
    
    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);
    
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    
    // Part 1: Insertion and Deletion
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    
    cout << "BST Inorder after insertion: ";
    inorder(root);
    
    root = deleteNode(root, 30);    
    cout << "\nBST Inorder after deleting 30: ";
    inorder(root);

    // Part 2: Balanced BST from Sorted Array
    int sortedArr[] = {1, 2, 3, 4, 5, 6, 7};
    Node* balancedRoot = sortedArrayToBST(sortedArr, 0, 6);
    
    cout << "\nBalanced BST Inorder: ";
    inorder(balancedRoot);

    return 0;
}
