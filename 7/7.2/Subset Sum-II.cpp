class Solution {
public:
    void genSubsets(int idx, vector<int>& nums, vector<int>& temp, vector<vector<int>>& sol){
        sol.push_back(temp);    
        
        for(int i=idx;i<nums.size();i++){
            if(i!=idx&&nums[i]==nums[i-1]) continue;
            
            temp.push_back(nums[i]);
            genSubsets(i+1, nums, temp, sol);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> sol;

        sort(nums.begin(), nums.end());
        genSubsets(0, nums, temp, sol);
        return sol;
    }
};
