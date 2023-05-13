class Solution{
	public:
	int modulo=1000000007;
	
	int generateSubset(int currSum, int idx, int n, int arr[], int sum){
	    if(idx==n){
	        if(currSum==sum) return 1;
	        return 0;
	    }
	    currSum=(currSum+arr[idx])%modulo;
	    int leftRec=generateSubset(currSum, idx+1, n, arr, sum);
	    
	    currSum=(currSum-arr[idx])%modulo;
	    int rightRec=generateSubset(currSum, idx+1, n, arr, sum);
	    
	    return leftRec+rightRec;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        return generateSubset(0, 0, n, arr, sum);
	}
	  
};
