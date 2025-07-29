/*
Optimal Approach - 2 pointer
First take fast k nodes ahead, then move both slow and fast until fast reaches the end, 
the difference between them will always be k, so slow will be kth element from end
*/

int findNode(node*head,int k){
    node* fast = head;
    node* slow = head;
    
    for(int i = 0;i<k;i++){
        if(fast==nullptr) return nullptr;
        fast = fast->next;
    }

    while(fast!=nullptr){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}


//Recursive Approach - Not returning node

int findNode(node*head,int k){
    if(head==nullptr){
        return 0;
    }

    int index = findNode(head->next ,k)+1;
    if(index ==k){
        cout<<head->val;
    }
    return index;

}


//Iterative Approach

node* findNode(node* head, int k) {
    int length = 0;
    node* temp = head;

    // Step 1: Calculate length
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    // Step 2: Find (length - k)th node from start
    if (k > length) return nullptr;

    temp = head;
    for (int i = 0; i < length - k; i++) {
        temp = temp->next;
    }

    return temp;
}
