#include <iostream>
using namespace std;

struct Node { 
    int data;
    Node* next;
};

int main() {

    Node* head = new Node{10,nullptr}; // the c language is case sensative and we have to store the value of a pointer 
     Node* second = new Node{20,nullptr};
      Node* third = new Node{30,nullptr};

      //Link them 
      head->next = second;
second->next = third;
 
//Traverse List from head 
cout<<"Linked lisT: ";
Node* temp = head;
while(temp != nullptr) {
    cout<< temp->data <<" ";
    temp = temp->next;
}
return 0; 
}
