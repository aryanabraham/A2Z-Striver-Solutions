void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *curr=head;
   Node *temp=new Node(data);
   
   while(pos--) curr=curr->next;
   
   temp->prev=curr;
   
   if(curr->next==NULL) temp->next=NULL;
   else {
       temp->next=curr->next;
       (curr->next)->prev=temp;
   }
   curr->next=temp;
}
