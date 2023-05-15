class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxLen=0;
        int currSum=0;
        map<int, int> preSumIdx;
        
        preSumIdx.insert({0, -1});
        for(int i=0;i<N;i++){
            currSum+=A[i];
            
            auto it=preSumIdx.find(currSum-K);
            if(it!=preSumIdx.end()) maxLen=max(maxLen, i-(it->second));
            else preSumIdx.insert({currSum, i});
        }
        return maxLen;
    } 

};
