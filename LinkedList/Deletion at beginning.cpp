/*Algorithm: Delete First Node in a Linked List

Input: Pointer to the head of the linked list

1. FUNCTION deleteFirstNode(head):
2.     IF head is NULL
3.         PRINT "List is already empty."
4.         RETURN
5.
6.     temp = head
7.     head = head.next
8.     FREE(temp)
9.     RETURN

10. FUNCTION displayList(head):
11.    current = head
12.    WHILE current is not NULL
13.        PRINT current.data, " -> "
14.        current = current.next
15.    PRINT "NULL"
16.    RETURN

17. FUNCTION main():
18.    head = createNode(10)
19.    head.next = createNode(20)
20.    head.next.next = createNode(30)

21.    PRINT "Original Linked List:"
22.    CALL displayList(head)

23.    CALL deleteFirstNode(head)

24.    PRINT "Linked List after deletion:"
25.    CALL displayList(head)

26.    WHILE head is not NULL
27.        temp = head
28.        head = head.next
29.        FREE(temp)

30.    RETURN
*/                                                                               
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

// Function to delete the first node of the linked list
void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is already empty." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
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

// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int main() {
    Node* head = nullptr; // Initialize head as nullptr

    int numNodes;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> numNodes;

    // Create the linked list based on user input
    for (int i = 0; i < numNodes; ++i) {
        int value;
        cout << "Enter the value for node " << i + 1 << ": ";
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "Original Linked List: ";
    displayList(head);

    deleteAtBeginning(head);

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

                                                                                          

