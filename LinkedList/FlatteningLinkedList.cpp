/*struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node* merge(Node* h1, Node* h2) {
    if (h1==NULL)  return h2;
    if (h2==NULL)  return h1;    
    Node* ans=NULL;    
    if (h1->data < h2->data) {
        ans = h1;
        ans->bottom = merge(h1->bottom,h2);
    } else {
        ans = h2;
        ans->bottom = merge(h1,h2->bottom);
    }    
    return ans;
}

Node* flatten(Node* head) {
    if (head==NULL || head->next==NULL) 
        return head;
    head = merge(head, flatten(head->next));
    return head;
}
