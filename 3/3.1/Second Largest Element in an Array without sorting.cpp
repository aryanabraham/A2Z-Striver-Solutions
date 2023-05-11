class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int lrg=arr[0];
	    int slrg=-1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>lrg){
	            slrg=lrg;
	            lrg=arr[i];
	        }
	        else if(arr[i]!=lrg&&arr[i]>slrg) 
	            slrg=arr[i];
	    }
	    return slrg;
	}
	
};
