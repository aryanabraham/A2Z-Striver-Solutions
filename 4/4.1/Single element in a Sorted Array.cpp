class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0, high=n-1;

        if(n<2||nums[low]!=nums[low+1]) return nums[low];
        if(n>2&&nums[high]!=nums[high-1]) return nums[high];

        while(low<=high){
            int mid=low+(high-low)/2;

            if(mid%2){
                if(0<mid&&nums[mid-1]==nums[mid]) low=mid+1;
                else if(mid<n-1&&nums[mid]==nums[mid+1]) high=mid-1;
                else return nums[mid];
            }
            else{
                if(0<mid&&nums[mid-1]==nums[mid]) high=mid-1;
                else if(mid<n-1&&nums[mid]==nums[mid+1]) low=mid+1;
                else return nums[mid];
            }
        }
        return -1;
    }
};
