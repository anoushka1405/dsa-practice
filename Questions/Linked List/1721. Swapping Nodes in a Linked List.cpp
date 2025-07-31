    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* node1 = head;
        ListNode* node2 = head;
        ListNode* node3 = head;

        for(int i = 1;i<k;i++){
            node1=node1->next;
        }
        node2 = node1;
        while(node2->next!=nullptr){
            node2 = node2->next;
            node3=node3->next;
        }
        swap(node1->val, node3->val);
        return head;

        
    }
