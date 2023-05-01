class Solution{
public:
	int count(int arr[], int n, int x) {
	    // code here
	    int start=-1, end=-1;
	    int low=0, high=n-1;
	    
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        
	        if(arr[mid]<x) low=mid+1;
	        else high=mid-1;
	    }
	    if(high<n-1&&arr[high+1]==x) start=high+1;
	    
	    low=0, high=n-1;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        
	        if(arr[mid]>x) high=mid-1;
	        else low=mid+1;
	    }
	    if(low>0&&arr[low-1]==x) end=low-1;
	    
	   return start==-1 ? 0 : end-start+1;
	}
};
