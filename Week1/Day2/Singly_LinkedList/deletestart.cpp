#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;
void deleteAtBeginning(){
    // If the list is empty, do nothing
    if (head == nullptr){
        cout<<"List is empty. Cannot delete from the beiginning."<<endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
void insertAtBeginning(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void printList() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Inserting nodes for testing
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);

    cout << "Initial List:" << endl;
    printList();

    // Deleting the node at the beginning
    deleteAtBeginning();

    cout << "List after deleting the node at the beginning:" << endl;
    printList();

    return 0;
}