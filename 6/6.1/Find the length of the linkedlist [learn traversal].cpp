class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head==NULL) return 0;
        
        int ctr=1;
        Node* curr=head;
        
        while(curr->next!=NULL){
            ctr++;
            curr=curr->next;
        }
        return ctr;
    }
};
