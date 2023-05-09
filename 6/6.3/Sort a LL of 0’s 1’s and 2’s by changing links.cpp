Node* segregate(Node *head) {
        
        // Add code here
        int i=0;
        Node *temp=head;
        vector<int> nums;
        
        while(temp){
            nums.push_back(temp->data);
            temp=temp->next;
        }
        
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0) swap(nums[low++], nums[mid++]); 
            else if(nums[mid]==1) mid++;
            else swap(nums[mid], nums[high--]);
        }
        
        temp=head;
        while(temp&&i<nums.size()){
            temp->data=nums[i++];
            temp=temp->next;
        }
        return head;
    }
