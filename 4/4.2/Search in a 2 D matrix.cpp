class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int low=0, high=m*n-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            int midEle=matrix[mid/n][mid%n];

            if(midEle==target) return true;
            else if(midEle<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
