LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    unordered_map<LinkedListNode<int> *, LinkedListNode<int> *>m;
    for(LinkedListNode<int> *curr = head; curr!=NULL; curr=curr->next){
        m[curr] = new LinkedListNode<int>(curr->data);
    }
    for(LinkedListNode<int> *curr=head; curr!=NULL; curr=curr->next){
        m[curr]->next = m[curr->next];
        m[curr]->random = m[curr->random];
    }
    return m[head];
}
