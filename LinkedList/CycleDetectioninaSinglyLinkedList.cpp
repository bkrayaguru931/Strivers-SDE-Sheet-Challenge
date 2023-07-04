bool detectCycle(Node *head)
{
	//	Write your code here


    Node*  slow = head;
    Node* fast = head;
    if(head == NULL || head->next == NULL)
        return false;
        
    while( fast && fast->next )
    {
            slow = slow->next;
            fast = fast->next->next;
        
        if(fast == slow)
            return true;
    }
    
    return false;
    
    
    // if(head==NULL){
    //     return false;
    // }
    // map<Node*,bool> visited;

    // Node* temp=head;
    
    // while(temp!=NULL){
    //     if(visited[temp]==true){
    //         return true;
    //     }
    //     visited[temp]=true;
    //     temp=temp->next;
    // }
    // return false;
}
