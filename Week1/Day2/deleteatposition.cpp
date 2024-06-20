#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;
void deleteAtPosition(int position)
{
    // If the list is empty, do nothing
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from a "
                "specific position."
             << endl;
        return;
    }

    // If deleting the head node
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Traverse to the node just before the specified
    // position
    Node* current = head;
    for (int i = 1;
         i < position && current->next != nullptr; ++i) {
        current = current->next;
    }

    // If position is beyond the end of the list, do nothing
    if (current->next == nullptr) {
        cout << "Position is beyond the end of the list. "
                "Cannot delete."
             << endl;
    }
    else {
        // Delete the node at the specified position
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
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
    deleteAtPosition(1);

    cout << "List after deleting the node at position 1" << endl;
    printList();

    return 0;
}