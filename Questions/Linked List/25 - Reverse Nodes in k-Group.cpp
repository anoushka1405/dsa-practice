
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Check if there are at least k nodes ahead
        ListNode* node = head;
        for (int i = 0; i < k; ++i) {
            if (!node) return head; // Less than k nodes, return head as is
            node = node->next;
        }

        // Step 2: Reverse k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int count = 0;

        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Recur for the remaining list
        if (next) {
            head->next = reverseKGroup(next, k);
        }

        // Step 4: Return new head of this segment
        return prev;
    }

/*
-reverseKGroup blends the logic of reversing a single linked list and swapping nodes in pairs, but applies it in chunks of size k.
-The code uses pointer manipulation to reverse exactly k nodes at a time, reconnecting each reversed group with the rest of the list.
-Conditions like while (curr && count < k) ensure that only complete groups of k nodes are reversed, preserving partial segments.
*/

