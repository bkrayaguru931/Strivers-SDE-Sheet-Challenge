Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* getListAfterReverseOperation(Node* head, int n, int b[]) {
    if (!head || !head->next)
        return head;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    int i = 0;
    while (i < n) {
        while (i < n && b[i] == 0)
            i++;
        if (i >= n)
            break;
        int count = 0;
        Node* curr = prev->next;
        Node* prevSectionTail = prev;
        while (count < b[i] && curr != nullptr) {
            prevSectionTail = curr;
            curr = curr->next;
            count++;
        }
        if (count < b[i])
            break;
        Node* nextSectionHead = curr;
        prevSectionTail->next = nullptr;
        Node* reversedHead = reverseLinkedList(prev->next);
        prev->next = reversedHead;
        while (reversedHead->next != nullptr)
            reversedHead = reversedHead->next;
        reversedHead->next = nextSectionHead;
        prev = reversedHead;
        i++;
    }
    return dummy->next;
}
