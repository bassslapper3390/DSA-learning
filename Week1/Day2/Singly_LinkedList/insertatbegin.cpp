#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d): data (d), next(nullptr) {}
};
void traverseLinkedList(Node* head){
    Node* current=head;
    while(current!= nullptr){
        cout<< current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of
// the list.
void insertionAtBeginning(Node** head_ref, int new_data){
    //allocation node
    Node* new_node = new Node(new_data);
    //put in the data
    new_node->data = new_data;
    //make next of new node as head
    new_node->next= (*head_ref);
    //move the head pointer to the new node
    (*head_ref)= new_node;
}

int main(){
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third= new Node(3);
    
    head->next=second;
    second->next=third;

    traverseLinkedList(head);

    insertionAtBeginning(&head, 4);

    traverseLinkedList(head);

    return 0;
}