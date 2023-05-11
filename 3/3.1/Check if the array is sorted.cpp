class Solution {
public:
    bool check(vector<int>& nums) {
        int faults=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n])
                faults++;
        }
        return faults<2?true:false;
    }
};
