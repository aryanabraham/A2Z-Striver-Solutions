class Solution {
public:
    int findMin(vector<int>& nums) {
        int minEle=INT_MAX;
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            minEle=min(minEle, nums[mid]);

            if(nums[low]>nums[mid]&&nums[mid]<nums[high]){
                if(nums[low]<nums[high]) low=mid+1;
                else high=mid-1;
            }
            else{
                if(nums[low]<nums[high]) high=mid-1;
                else low=mid+1;
            }
        }
        return minEle;
    }
};
