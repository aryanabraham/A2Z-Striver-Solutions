class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        int lowerLimit=1, upperLimit=2000;
        
        while(lowerLimit<=upperLimit){
            int ctr=0;
            int k=lowerLimit+(upperLimit-lowerLimit)/2;
            
            //finding number of elements less than k
            for(int i=0;i<R;i++){
                int low=0, high=C-1;
                
                while(low<=high){
                    int mid=low+(high-low)/2;
                    
                    if(matrix[i][mid]<=k){
                        low=mid+1;
                    }
                    else high=mid-1;
                }
                ctr+=low;
            }
            if(ctr<=(R*C)/2) lowerLimit=k+1;
            else upperLimit=k-1;
        }
        return lowerLimit;
    }
};
