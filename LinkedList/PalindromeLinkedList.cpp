bool isPalindrome(LinkedListNode<int>* head) {
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;
    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    if (fast != NULL && fast -> next == NULL) {
        slow = slow -> next;
    }
    
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* temp = NULL;
    while (slow != NULL) {
        temp = slow -> next;
        slow -> next = prev;
        prev = slow;
        slow = temp;
    }
    slow = prev, fast = head;
    while (slow && fast) {
        if (slow -> data != fast -> data) 
        return false;
        
        slow = slow -> next;
        fast = fast -> next;
    }
    return true;
}
