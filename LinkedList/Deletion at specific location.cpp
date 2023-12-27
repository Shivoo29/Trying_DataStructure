#include <iostream>

using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    if (!newNode) {
        cout << "Memory error" << endl;
        exit(1);
    }
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to delete a node after a given node
void deleteAfter(Node* prevNode) {
    if (prevNode == nullptr || prevNode->next == nullptr) {
        cout << "The given node is NULL or there's no node after it to delete." << endl;
        return;
    }

    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    delete temp; // Use delete instead of free in C++
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a linked list with four nodes
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    // Display the original linked list
    cout << "Original Linked List: ";
    displayList(head);

    // Delete the node after the second node (20)
    deleteAfter(head->next);

    // Display the linked list after deletion
    cout << "Linked List after deletion: ";
    displayList(head);

    // Free the remaining allocated memory (for completeness)
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
