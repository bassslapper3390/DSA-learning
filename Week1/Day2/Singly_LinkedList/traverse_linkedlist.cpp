#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    // Constructor for easier initialization
    Node(int d) : data(d), next(nullptr) {}
};

//Function to traverse and print the element of the linkedlist
void traverseLinkedList(Node* head){
    //start from the head of the linkedList
    Node* current = head;

    //Traverce the linkedlist until reaching the end(nullptr)
    while(current!= nullptr){
        // Print the data of the current node
        cout<< current->data<<" ";
        // Move to the next node
        current=current->next;

    }
    cout<< endl;
}
// Example usage:
// Assuming the linked list is already constructed
int main(){
    //creating nodes
    Node* head = new Node (1);
    Node* second = new Node (2);
    Node* third = new Node (3);

    //connect node
    head->next=second;
    second->next=third;

    // Call the traverseLinkedList function to print the linked list elements
    traverseLinkedList(head);

    //Memory cleanup (Free allocated memory)
    delete head;
    delete second;
    delete third;

    return 0;
}