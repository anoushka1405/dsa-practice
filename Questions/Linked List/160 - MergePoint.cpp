//Return node where two linked lists merge to form single linked list - Brute Force

Node* findMergePoint(Node* head1, Node* head2) {
    // For every node in list1
    while (head1 != nullptr) {
        Node* temp = head2;

        // Compare with every node in list2
        while (temp != nullptr) {
            // Check if both pointers are pointing to the exact same node in memory
            if (head1 == temp) {
                return head1;  // Merge point found
            }
            temp = temp->next;
        }

        head1 = head1->next;
    }

    return nullptr;  // No merge point
}

// Optimal Approach - 2 Pointers
Node* findMergePoint(Node* head1, Node* head2) {
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while (ptr1 != ptr2) {
        // If ptr1 reaches end, move it to head2, else move to next
        ptr1 = (ptr1 == nullptr) ? head2 : ptr1->next;
        
        // If ptr2 reaches end, move it to head1, else move to next
        ptr2 = (ptr2 == nullptr) ? head1 : ptr2->next;
    }

    return ptr1; // will be merge point or nullptr if no merge
}

/*
Both pointers traverse the total length of ListA + ListB.

After one full switch, they cancel out length difference and meet at merge point (if any).

If no merge, both hit nullptr at the same time and return nullptr.
*/
