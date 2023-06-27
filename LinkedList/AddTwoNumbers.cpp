void insert(Node* &head, Node* &tail,int val){

    Node* temp = new Node(val);

    // if LL is empty

    if(head == NULL){

        head = temp;

        tail = temp;

    }

    else{

        tail -> next = temp;

        tail = temp;

    }

}

 

Node *addTwoNumbers(Node *head1, Node *head2)

{

    Node *head = NULL;

    Node *tail = NULL;

 

    int carry = 0;

    

    while(head1 != NULL || head2 != NULL || carry != 0){

        int val1 = 0;

        if(head1 != NULL)

            val1 = head1 -> data;

        

        int val2 = 0;

        if(head2 != NULL)

            val2 = head2 -> data;

        

        int sum = val1 + val2 + carry;

        int digit = sum%10;

        //insert new node 

        insert(head,tail,digit);

        carry = sum / 10;

 

        if(head1 != NULL)

            head1 = head1 -> next;

        if(head2 != NULL)

            head2 = head2 -> next;    

    }

    return head;

 

}
