## Algorithm: Delete First Node in a Linked List

**Input:** Pointer to the head of the linked list

1. **FUNCTION deleteFirstNode(head):**
    - IF `head` is NULL
        - PRINT "List is already empty."
        - RETURN

    - Set `temp` to `head`
    - Set `head` to `head.next`
    - FREE(`temp`)
    - RETURN

2. **FUNCTION displayList(head):**
    - Set `current` to `head`
    - WHILE `current` is not NULL
        - PRINT `current.data`, " -> "
        - Set `current` to `current.next`
    - PRINT "NULL"
    - RETURN

3. **FUNCTION main():**
    - Set `head` to `createNode(10)`
    - Set `head.next` to `createNode(20)`
    - Set `head.next.next` to `createNode(30)`

    - PRINT "Original Linked List:"
    - CALL `displayList(head)`

    - CALL `deleteFirstNode(head)`

    - PRINT "Linked List after deletion:"
    - CALL `displayList(head)`

    - WHILE `head` is not NULL
        - Set `temp` to `head`
        - Set `head` to `head.next`
        - FREE(`temp`)

    - RETURN
