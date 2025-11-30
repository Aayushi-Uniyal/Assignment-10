#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool hasCycle(Node* head) {
    Node* hash[1000] = {NULL};

    Node* curr = head;
    while (curr != NULL) {
        int index = ((unsigned long long)curr) % 1000;

        if (hash[index] == curr)
            return true;

        hash[index] = curr;
        curr = curr->next;
    }
    return false;
}

int main() {
    Node *a = new Node{1, NULL};
    Node *b = new Node{2, NULL};
    Node *c = new Node{3, NULL};
    Node *d = new Node{4, NULL};

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;  // cycle

    cout << (hasCycle(a) ? "true" : "false");
}
