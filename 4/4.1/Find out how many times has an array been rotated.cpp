class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int minIdx=-1;
	    int minEle=INT_MAX;
	    int low=0, high=n-1;
	    
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        
	        if(arr[mid]<minEle){
	            minIdx=mid;
	            minEle=arr[mid];
	        }
        
	        if(arr[mid]<arr[high]) high=mid-1;
	        else low=mid+1;
	    }
	    return minIdx;
	}
};
