/* 
Detect Loop using Floyd's Algorithm then keep slow as it is, initialse counter varible with 1 and move fast one step forward. 
Then incremenet count as fast moves each step till it meets slow again 
*/

int looplength(node* head) {
    node* fast = head;
    node* slow = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Loop detected
            int count = 1;
            fast = fast->next;  // move one step before counting
            while (fast != slow) {
                fast = fast->next;
                count++;
            }
            return count;
        }
    }

    return 0;  // No loop
}
