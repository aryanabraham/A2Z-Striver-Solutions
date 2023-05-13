// TC: O(NlogN), logN to divide array into 2 subarrays and N to merge them back
// SC: O(1) + O(N) auxillary stack space

// NOTE: Worst-case time complexity would be O(N^2), when pivot is 
//       greatest or smallest element of array

/*

Step 1: Pick a pivot (any, here it is first),
        and place it in its "correct" place
        
        1.1 Initialize i as low and j as high
        1.2 Increment i till first element greater
            than pivot is found
        1.3 Decrement j till first element lesser 
            than pivot is found
        1.4 Swap nums[i] and nums[j]
        1.5 Repeat till i<j
        1.6 Place pivot at index of j

Step 2: Place elements smaller than pivot on
        its left and larger than it on its right
        
Step 3: Repeat till there is only 1 element left
        in an array
    
*/

#include <bits/stdc++.h>
using namespace std;

int placePivot(int low, int high, vector<int>& nums){
    int n=nums.size();
    int i=low, j=high;
    int pivot=nums[low];
    
    while(i<j){
        while(i<=high&&nums[i]<=pivot) i++;
        while(j>=low&&nums[j]>pivot) j--;
        
        if(i<j) swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

void quickSort(int low, int high, vector<int>& nums){
    if(low<high){
        int pi=placePivot(low, high, nums);
        
        quickSort(low, pi-1, nums);
        quickSort(pi+1, high, nums);
    }
}

int main(){
    vector<int> nums={30, 10, 50, 20, 40};
    
    quickSort(0, nums.size()-1, nums);
    for(auto &it: nums)
        cout<<it<<" ";
    return 0;
}
