Node* reverseDLL(Node * head)
{
    //Your code here
    int n=1;
    Node *curr=head;
    Node *tail=head;
    
    while(tail->next){
        n++;
        tail=tail->next;
    }
    
    while(n>1){
        swap(curr->data, tail->data);
        curr=curr->next;
        tail=tail->prev;
        n-=2;
    }
    return head;
    
}
