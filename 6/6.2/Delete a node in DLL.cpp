class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node *curr=head_ref;
      
      while(x>1) {
          curr=curr->next;
          x--;
      }
      
      if(curr->prev==NULL){
          head_ref=curr->next;
          (curr->next)->prev=NULL;
      }
      else if(curr->next==NULL){
          (curr->prev)->next=NULL;
      }
      else{
          (curr->prev)->next=curr->next;
          (curr->next)->prev=curr->prev;
      }
      return head_ref;
    }
};
