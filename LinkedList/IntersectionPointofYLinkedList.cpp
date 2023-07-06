Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
     if(firstHead==NULL || secondHead==NULL )
           return NULL;
        
        Node* h1=firstHead;
        Node* h2=secondHead;
        while(h1!=h2)
        {
            if(h1==NULL){
                h1=secondHead;
            }
            else h1=h1->next;

            if(h2==NULL){
                h2=firstHead;
            }
            else h2=h2->next;
            
        }
        return h1;
}
