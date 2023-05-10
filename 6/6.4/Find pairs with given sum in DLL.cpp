class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> sol;
        Node *start=head;
        Node *end=head;
        
        while(end->next) end=end->next;
        
        while((start&&end)&&start!=end){
            int sum=(start->data)+(end->data);
            
            if(sum<target) start=start->next;
            else if(sum>target) end=end->prev;
            else{
                sol.push_back({start->data, end->data});
                start=start->next;
            }
        }
        return sol;
    }
};
