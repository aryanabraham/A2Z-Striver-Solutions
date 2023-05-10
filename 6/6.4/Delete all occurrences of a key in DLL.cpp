class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* temp=*head_ref;
        
        while(temp){
            if((*head_ref)->data==x) *head_ref=(*head_ref)->next;
            
            else if(temp->data==x){
                if(temp->next) (temp->next)->prev=temp->prev;
                
                (temp->prev)->next=temp->next;
            }
            temp=temp->next;
        }
    }
};
