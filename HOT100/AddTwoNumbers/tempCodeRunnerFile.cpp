
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int temp = 0;
    ListNode* result = new ListNode(0); 
    ListNode* head = result;
    while(l1 != nullptr || l2 != nullptr || temp) { 
        int sum = temp;
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }
        temp = sum / 10;
        result->next = new ListNode(sum % 10);
        result = result->next;
    }
    ListNode* finalResult = head->next; 
    delete head; 
    head=nullptr;
    return finalResult;
}