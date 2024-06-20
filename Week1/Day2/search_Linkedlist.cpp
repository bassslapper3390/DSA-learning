#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    //constructor
    Node(int d): data(d), next(nullptr) {}
};

//function to print the elements
void traverseLinkedList(Node* head){
    Node* current= head;
    while(current!= nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
//function to seatch element
bool searchLinkedList(Node* head, int target) {
    // Traverse the Linked List
    while(head!= nullptr){
        // Check if the current node's data matches the target value
        if (head->data==target){
            return true;//value found
        }
        //move to the next node
        head=head->next;
    }
    return false;//value not found
}
//example usage 
int main(){
    //creating nodes
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third= new Node(3);
    Node* fourth= new Node(4);
    //connect nodes 
    head-> next=second;
    second-> next=third;
    third->next=fourth;

    //call the traverseLinkedList function
    traverseLinkedList(head);
    //call the searchLinkedList function
    bool found = searchLinkedList(head, 2);
    if(found) {
        cout << "Element found in the linked list." << endl;
    } else {
        cout << "Element not found in the linked list." << endl;
    }
    //memory cleanup
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}