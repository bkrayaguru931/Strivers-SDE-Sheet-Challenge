LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
        LinkedListNode<int> *prev=NULL;
        LinkedListNode<int> *curr=head;
        LinkedListNode<int> *next;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        return prev;
}
