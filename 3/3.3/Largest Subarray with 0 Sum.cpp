class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int currSum=0, maxLen=0;
        unordered_map<int, int> preSumIdx;
        
        preSumIdx.insert({0, -1});
        for(int i=0;i<n;i++){
            currSum+=A[i];
            
            auto it=preSumIdx.find(currSum);
            if(it!=preSumIdx.end())
                maxLen=max(maxLen, (i-(it->second)));
            else
                preSumIdx.insert({currSum, i});
        }
        return maxLen;
    }
};
