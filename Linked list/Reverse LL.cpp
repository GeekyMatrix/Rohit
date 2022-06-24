Node *reverseLinkedList(Node *head) {
    // Write your code here
    if(head==NULL||head->next==NULL)
        return head;
    Node *current= head;
    Node *previous=NULL;
    Node *after=head->next;
    while(current!=NULL){
        current->next=previous;
        previous=current;
        current=after;
    }
    return previous;
}
