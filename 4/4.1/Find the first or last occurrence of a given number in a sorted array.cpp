class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> sol={-1, -1};
        int low=0, high=nums.size()-1;
        int stIdx=INT_MAX, endIdx=INT_MIN;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]<target) low=mid+1;
            else if(nums[mid]>target) high=mid-1;
            else{
                stIdx=min(stIdx, mid);
                high=mid-1;
            }
        }

        if(stIdx==INT_MAX) return sol;

        low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]<target) low=mid+1;
            else if(nums[mid]>target) high=mid-1;
            else{
                endIdx=max(endIdx, mid);
                low=mid+1;
            }
        }
        
        sol[0]=stIdx;
        sol[1]=endIdx;
        return sol;
    }
};
