#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert new node at beginning
void insertAtHead(Node*& head, int val) {
    Node* n = new Node{val, head}; // error tha bracket ka [] thi
    head = n; // update head
}

// Delete first node
void deleteHead(Node*& head) {
    if (!head) return;    // empty List check
    Node* temp = head;    // store old head
    head = head->next;    // move head
    delete temp;    // free old head
}

// Print List
void printList(Node* head) {
    cout << "List: ";
    for (Node* cur = head; cur; cur = cur->next)
    cout << cur->data << " ";
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 30);    // List: 30
    insertAtHead(head, 20);    // List: 20 -> 30
    insertAtHead(head, 10);    // List: 10 -> 20 -> 30
    printList(head);

    deleteHead(head);    // remove 10
    printList(head);

    return 0;
}