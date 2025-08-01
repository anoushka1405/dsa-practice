// into two single linked lists
pair<node*, node*> splitCircularList(node* head) {
    // Edge case: if the list is empty or has only one node, return as-is.
    if (!head || head->next == head) {
        return {head, nullptr};
    }

    // Initialize fast and slow pointers for the "tortoise and hare" approach.
    node* fast = head;
    node* slow = head;

    // Move fast by 2 steps and slow by 1 step until fast reaches the end.
    // This finds the middle node (slow will point to it).
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // If the list has even number of nodes, advance fast one more step
    // so that both halves are properly split.
    if (fast->next->next == head) {
        fast = fast->next;
    }

    // Set up the two heads for the split lists.
    node* node1 = head;         // First half starts from head
    node* node2 = slow->next;   // Second half starts from node after mid

    // Break the circular links to make two separate circular lists or linear parts.
    slow->next = nullptr;
    fast->next = nullptr;

    // Return both halves as a pair.
    return {node1, node2};
}




//into two circular linked lists
pair<node*, node*> splitCircularList(node* head) {
    if (!head || head->next == head) {
        return {head, nullptr};
    }

    node* fast = head;
    node* slow = head;

    // Find middle using tortoise-hare method
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // If even number of nodes, move fast to last node
    if (fast->next->next == head) {
        fast = fast->next;
    }

    node* node1 = head;
    node* node2 = slow->next;

    // Break and form the two circular lists
    fast->next = node2;   // End of second half points to head of second half
    slow->next = node1;   // End of first half points to head of first half

    return {node1, node2};
}
