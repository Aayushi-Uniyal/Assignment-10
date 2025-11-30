#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool visited[10000] = {false};

bool checkDuplicates(Node* root) {
    if (root == NULL) return false;

    if (visited[root->data])
        return true;

    visited[root->data] = true;

    return checkDuplicates(root->left) || checkDuplicates(root->right);
}

int main() {
    Node* root = new Node{5, NULL, NULL};
    root->left = new Node{3, NULL, NULL};
    root->right = new Node{7, NULL, NULL};
    root->left->left = new Node{5, NULL, NULL};  

    if (checkDuplicates(root))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";
}
