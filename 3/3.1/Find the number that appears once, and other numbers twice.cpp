class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int currXOR=nums[0];
        for(int i=1;i<nums.size();i++)
            currXOR^=nums[i];
        return currXOR;
    }
};
