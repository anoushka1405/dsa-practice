ListNode* reverseDLL(ListNode* head) {
        if(!head)return nullptr;

        ListNode* current = head;
        ListNode* temp = nullptr;

        while(current!=nullptr){
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            current = current->prev;

        }
        if(temp!=nullptr){
            head = temp->prev;
        }
        return head;
