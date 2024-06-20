#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    static Node* head; // assuming head is a static variable

    static void deleteAtEnd() {
        // If the list is empty, do nothing
        if (head == nullptr) {
            cout << "List is empty. Cannot delete from the end." << endl;
            return;
        }

        // If there is only one node, delete it and set head to null
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        // Traverse to the second last node
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        // Delete the last node
        delete current->next;
        current->next = nullptr;
    }

    static void printList(Node* node) {
        while (node != nullptr) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};

Node* LinkedList::head = nullptr;

int main() {
    // Example usage
    LinkedList::head = new Node(1);
    LinkedList::head->next = new Node(2);
    LinkedList::head->next->next = new Node(3);

    cout << "Original List:" << endl;
    LinkedList::printList(LinkedList::head);

    LinkedList::deleteAtEnd();

    cout << "List after deleting at end:" << endl;
    LinkedList::printList(LinkedList::head);

    return 0;
}
