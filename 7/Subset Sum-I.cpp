class Solution
{
public:
    void genSubset(int idx, int sum, vector<int>& arr, vector<int>& subsetSumsArr){
        if(idx==arr.size()){
            subsetSumsArr.push_back(sum);
            return;
        }
        
        sum+=arr[idx];
        genSubset(idx+1, sum, arr, subsetSumsArr);
        
        sum-=arr[idx];
        genSubset(idx+1, sum, arr, subsetSumsArr);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> subsetSumsArr;
        
        genSubset(0, 0, arr, subsetSumsArr);
        reverse(subsetSumsArr.begin(), subsetSumsArr.end());
        
        return subsetSumsArr;
    }
};
