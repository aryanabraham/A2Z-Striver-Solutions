class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCtr=0;
        unordered_set<int> newNums;

        for(int i=0;i<nums.size();i++)
            newNums.insert(nums[i]);

        for(int i=0;i<nums.size();i++){
            if(newNums.find(nums[i]-1)==newNums.end()){
                int ctr=0;
                int ele=nums[i];

                while(newNums.find(ele)!=newNums.end())
                    ele++, ctr++;
                
                maxCtr=max(maxCtr, ctr);
            }
        }
        return maxCtr;
    }
};
