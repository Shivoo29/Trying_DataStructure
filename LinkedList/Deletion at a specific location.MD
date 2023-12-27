## Algorithm: Delete Node After a Given Node in a Linked List

**Input:** Pointer to the head of the linked list, Node to delete after (prevNode)

1. **FUNCTION createNode(data):**
   - Create a new node with the given data.
   - Set the next pointer of the new node to `nullptr`.
   - Return the pointer to the newly created node.

2. **FUNCTION deleteAfter(prevNode):**
   - Check if `prevNode` or `prevNode->next` is `nullptr`.
     - If true, print an error message and return.
   - Create a temporary pointer `temp` and set it to `prevNode->next`.
   - Set `prevNode->next` to `temp->next`.
   - Free the memory occupied by the `temp` node.

3. **FUNCTION displayList(head):**
   - Traverse the linked list from the `head` to the end.
   - Print the data of each node followed by `->`.
   - Print `NULL` at the end of the list.

4. **FUNCTION main():**
   - Create the head of the linked list with the first node containing data `10`.
   - Create additional nodes (20, 30, 40) and link them to the head.
   - Display the original linked list.
   - Call `deleteAfter(head->next)` to delete the node after the second node (20).
   - Display the linked list after deletion.
   - Free the remaining allocated memory by traversing the list and deleting each node.

**Output:** Updated linked list after deleting the node after the given node.

**Note:** This algorithm assumes that the input to `deleteAfter` is a valid node in the linked list. If `prevNode` is `nullptr` or `prevNode->next` is `nullptr`, it prints an error message and returns.