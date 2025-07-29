// 3 pointer technique
node* reversell(node* head) {
    node* prev = nullptr;
    node* curr = head;

    while (curr != nullptr) {
        node* next = curr->next; // store next node
        curr->next = prev;       // reverse current pointer
        prev = curr;             // move prev ahead
        curr = next;             // move curr ahead
    }

    return prev; // new head of reversed list
}

//Recursive Approach

node* reverseLL(node* head) {
    // Base case: empty list or single node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Reverse rest of the list
    node* newHead = reverseLL(head->next);

    // Make the next node point back to current
    head->next->next = head;

    // Disconnect current node from next
    head->next = nullptr;

    return newHead;
}
