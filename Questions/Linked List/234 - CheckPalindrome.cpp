bool isPalindrome(ListNode* head) {
    // Assume the list is a palindrome initially
    bool palindrome = true;

    // Edge case: Empty list or single node is always a palindrome
    if (!head || !head->next) return true;

    // Step 1: Use fast and slow pointers to find the middle of the list
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;  // fast moves 2 steps
        slow = slow->next;        // slow moves 1 step
    }

    // After the loop:
    // - slow is at the middle of the list
    // - head1 will traverse from start to middle
    ListNode* head1 = head;
    ListNode* head2 = slow;

    // Step 2: Reverse the second half of the list (from slow to end)
    ListNode* prev = nullptr;
    ListNode* curr = head2;
    ListNode* next;
    while (curr != nullptr) {
        next = curr->next;   // Save next node
        curr->next = prev;   // Reverse current node's pointer
        prev = curr;         // Move prev one step forward
        curr = next;         // Move curr one step forward
    }

    // Step 3: Compare values from the beginning and from the reversed second half
    // prev now points to the head of the reversed second half
    while (head1 != nullptr && prev != nullptr) {
        if (head1->val != prev->val) {
            palindrome = false;
            break;
        }
        head1 = head1->next;
        prev = prev->next;
    }

    // Step 4: Return the result
    return palindrome;
}

