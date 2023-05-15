class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int start=0;
        int maxLen=0;
        int currSum=0;
        
        for(int end=0;end<N;end++){
            currSum+=A[end];
            
            if(currSum==K){
                maxLen=max(maxLen, end-start+1);
                currSum-=A[start];
                start++;
            }
        }
        return maxLen;
    } 

};
