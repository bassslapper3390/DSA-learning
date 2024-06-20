#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d):data(d), next(nullptr) {}
};
void traverseLinkedList(Node* head){
    Node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

// Given a reference (pointer to pointer) to the head
// of a list and an int, appends a new node at the end
void insertAtEnd(Node** head_ref, int new_data){
    //allocation node
    Node* new_node = new Node(new_data);
    //use in last step
    Node* last = *head_ref;
    //if the Linked List is empty, then make the new node as head
    if (*head_ref == nullptr){
        *head_ref = new_node;
        return ; 
    }
    //else traverse till last node
    while(last->next != nullptr){
        last=last->next;
    }
    //change the next of last node
    last->next = new_node;
}
//main
int main(){
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third= new Node(3);

    head->next=second;
    second->next=third;

    traverseLinkedList(head);

    insertAtEnd(&head,4);

    traverseLinkedList(head);


    return 0;

}
