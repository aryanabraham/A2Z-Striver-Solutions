class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0, high=n-1;

        if(high==0) return nums[0];
        else if(nums[low]!=nums[1]) return nums[low];
        else if(nums[high-1]!=nums[high]) return nums[high];

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid-1]!=nums[mid]&&nums[mid]!=nums[mid+1]) return nums[mid];
            else if ((!(mid%2)&&nums[mid-1]==nums[mid])||(mid%2&&nums[mid]==nums[mid+1]))
                high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};
