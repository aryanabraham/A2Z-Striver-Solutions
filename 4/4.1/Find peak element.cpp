class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=n-1;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(mid>0&&nums[mid-1]>nums[mid]) r=mid-1;
            else if(mid<n-1&&nums[mid+1]>nums[mid]) l=mid+1;
            else return mid;
        }
        return -1;
    }
};
