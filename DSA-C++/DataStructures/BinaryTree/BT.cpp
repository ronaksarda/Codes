#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root = nullptr;

    void insert(int val) {
        if (!root) { root = new Node(val); return; }
        queue<Node*> q; q.push(root);
        while (!q.empty()) {
            Node* temp = q.front(); q.pop();
            if (!temp->left) { temp->left = new Node(val); return; }
            else q.push(temp->left);
            if (!temp->right) { temp->right = new Node(val); return; }
            else q.push(temp->right);
        }
    }
    void remove(int val) {
        if (!root) return;
        if (root->data == val) { delete root; root = nullptr; return; }
        queue<Node*> q; q.push(root);
        Node *temp, *keyNode = nullptr;
        while (!q.empty()) {
            temp = q.front(); q.pop();
            if (temp->data == val) keyNode = temp;
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        if (keyNode) {
            keyNode->data = temp->data;
            delete temp;
        }
    }
    void inorder(Node* n) { if(n){ inorder(n->left); cout << n->data << " "; inorder(n->right); } }
    void preorder(Node* n) { if(n){ cout << n->data << " "; preorder(n->left); preorder(n->right); } }
    void postorder(Node* n) { if(n){ postorder(n->left); postorder(n->right); cout << n->data << " "; } }
};

int main() {
    BinaryTree bt;
    int vals[] = {1, 2, 3, 4, 5};
    for(int v : vals) bt.insert(v);

    cout << "Inorder: "; bt.inorder(bt.root);
    bt.remove(2);
    cout << "\nAfter deleting 2: "; bt.inorder(bt.root);
    cout << "\nPreorder: "; bt.preorder(bt.root);
    cout << "\nPostorder: "; bt.postorder(bt.root);
    return 0;
}
