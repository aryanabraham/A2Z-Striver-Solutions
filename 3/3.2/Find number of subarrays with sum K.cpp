class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ctr=0, currSum=0;
        unordered_map<int, int> preSumFreq;

        preSumFreq.insert({currSum, 1});
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            auto it=preSumFreq.find(currSum-k);

            if(it!=preSumFreq.end()) ctr+=it->second;
            preSumFreq[currSum]++; 
        }
        return ctr;
    }
};
