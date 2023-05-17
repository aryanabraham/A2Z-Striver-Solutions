class Solution {
public:
    void genCombos(int idx, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& sol){
        if(!target){
            sol.push_back(temp);
            return;
        }

        for(int i=idx;i<candidates.size();i++){
            if(i!=idx&&candidates[i]==candidates[i-1]) continue;
            if(target<candidates[i]) return;

            temp.push_back(candidates[i]);
            genCombos(i+1, target-candidates[i], candidates, temp, sol);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> sol;

        sort(candidates.begin(), candidates.end());
        genCombos(0, target, candidates, temp, sol);
        return sol;   
    }
};
