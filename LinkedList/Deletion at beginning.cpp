#include <iostream>
using namespace std;                                                            //  Algorithm: Delete First Node in a Linked List
// Define the Node structure                                                    //  Input: Pointer to the head of the linked list            
struct Node {                                                                   //   1. FUNCTION deleteFirstNode(head):
    int data;                                                                   //   2.     IF head is NULL
    Node* next;                                                                 //   3.         PRINT "List is already empty."
};                                                                              //   4.         RETURN
                                                                                //   5.         {return statement}
// Function to create a new node                                                //   6.     temp = head
Node* createNode(int data) {                                                    //   7.     head = head.next
    Node* newNode = new Node;                                                   //   8.     FREE(temp)
    if (!newNode) {                                                             //   9.     RETURN
        cout << "Memory error" << endl;                                         //   10. FUNCTION displayList(head):
        exit(1);                                                                //   11.    current = head
    }                                                                           //   12.    WHILE current is not NULL
    newNode->data = data;                                                       //   13.        PRINT current.data, " -> "
    newNode->next = nullptr;                                                    //   14.        current = current.next
    return newNode;                                                             //   15.    PRINT "NULL"
}                                                                               //   16.    RETURN
                                                                                //   17. FUNCTION main():
// Function to delete the first node of the linked list                         //   18.    head = createNode(10)
void deleteAtBeginning(Node*& head) {                                           //   19.    head.next = createNode(20)
    if (head == nullptr) {                                                      //   20.    head.next.next = createNode(30)
        cout << "List is already empty." << endl;                               //   21.    PRINT "Original Linked List:"
        return;                                                                 //   22.    CALL displayList(head)
    }                                                                           //   23.    CALL deleteFirstNode(head)
                                                                                //   24.    PRINT "Linked List after deletion:"
    Node* temp = head;                                                          //   25.    CALL displayList(head)
    head = head->next;                                                          //   26.    WHILE head is not NULL
    delete temp;                                                                //   27.        temp = head
}                                                                               //   28.        head = head.next
                                                                                //   29.        FREE(temp)
// Function to display the linked list                                          //   30.    RETURN
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

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

                                                                                          

