#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value): data (value), next(nullptr) {}
};
Node* head = nullptr;

void traverseLinkedList(Node* head){
    Node* current=head;
    while(current!= nullptr){
        cout<< current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
// insertAtPosition(5, 2); // Inserts value 5 at position 2

void insertAtPosition(int value, int position){
     // Create a new node with the given data
     Node* newNode = new Node(value);
     // If position is 0 or the list is empty, insert at the beginning
     if (position == 0 || head == nullptr){
        newNode->next=head;
        head==newNode;
        return;
     }
    // Traverse to the node just before the specified position
    Node* current = head;
    for(int i =1; i<position && current->next != nullptr; ++i){
        current=current->next;
    }
    // Insert the new node at the specified position
    newNode->next=current->next;
    current->next-newNode;
}

int main(){
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third= new Node(3);
    
    head->next=second;
    second->next=third;

    traverseLinkedList(head);

    insertAtPosition(5, 2);

    traverseLinkedList(head);

    return 0;
}