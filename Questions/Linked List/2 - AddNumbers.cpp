/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy node to simplify edge cases (e.g., first node creation)
        ListNode* dummy = new ListNode(0);

        // 'curr' will point to the last node in the result list
        ListNode* curr = dummy;

        // 'carry' keeps track of overflow (e.g., 9 + 8 = 17, carry = 1)
        int carry = 0;

        // Loop runs as long as there are nodes left in either list or a remaining carry
        while (l1 || l2 || carry) {
            int sum = carry;

            // If l1 has a value, add it to sum and move to the next node
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            // If l2 has a value, add it to sum and move to the next node
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate the new carry for the next digit
            carry = sum / 10;

            // Create a new node with the digit part (sum % 10) and attach it
            curr->next = new ListNode(sum % 10);

            // Move the curr pointer forward
            curr = curr->next;
        }

        // Return the next of dummy (actual result head)
        return dummy->next;
    }
};
