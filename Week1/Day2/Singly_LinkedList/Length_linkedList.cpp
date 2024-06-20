#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
//Function to fing the length of the linked list 
int findlength(Node* head){
    //Initialize a counter for the length
    int length=0;

    //start from the head of the list
    Node* current = head;
    //traverce the list and increment the length for each node
    while(current != nullptr){
        length++;
        current=current->next;
    }
    return length;
}
//main code
int main(){
    //creating node
    Node* head = new Node (1);
    Node* second = new Node (2);
    Node* third = new Node (3);
    //connecting node
    head->next=second;
    second->next=third;

    int len= findlength(head);
    cout<<len<<endl;
    delete head;
    delete second;
    delete third;

    return 0;
}