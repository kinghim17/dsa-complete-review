

//input version
#include <bits/stdc++.h>
using namespace std;


Node* buildTree() {
    int key;
    cout << "Enter the value for the root node: ";
    cin >> key;

    Node* root = new Node(key);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << "Enter left child of " << current->key << " (or -1 for no left child): ";
        cin >> key;
        if (key != -1) {
            current->left = new Node(key);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->key << " (or -1 for no right child): ";
        cin >> key;
        if (key != -1) {
            current->right = new Node(key);
            q.push(current->right);
        }
    }

    return root;
}

int main() {
    Node* root = buildTree();
    cout << "Inorder traversal of the binary tree is: ";
    inorder(root);
    cout << endl;

    return 0;
}
