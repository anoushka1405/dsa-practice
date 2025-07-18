ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                ListNode* entry = head;
                while(slow!=entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }

        }  
        return nullptr;  
    }

// First detech if there is a cycle using tortoise hare method. Then Reset one pointer to head and move both that and slow/fast one step at a time. They will meet at starting node.
