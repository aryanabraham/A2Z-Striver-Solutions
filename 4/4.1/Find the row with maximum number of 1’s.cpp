class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int maxOnes=0;
	    int maxOnesRow=-1;
	    
	    for(int i=0;i<n;i++){
	        int l=0, r=m-1;
	        int minIdx=INT_MAX;
	        
	        while(l<=r){
	            int mid=l+(r-l)/2;
	            
	            if(arr[i][mid]==0) l=mid+1;
	            else {
	                minIdx=min(minIdx, mid);
	                r=mid-1;
	            }
	        }
	        if(m-minIdx==maxOnes) maxOnesRow=min(maxOnesRow, i);
	        
	        else if(m-minIdx>maxOnes){
	            maxOnes=m-minIdx;
	            maxOnesRow=i;
	        }
	    }
	    return maxOnesRow;
	}

};
