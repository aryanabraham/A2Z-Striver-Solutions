#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> sol;
    vector<int> nums={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int currSum=0, maxSum=nums[0];
    int start=-1, ansStart=-1, ansEnd=-1;
    
    for(int i=0;i<nums.size();i++){
        if(currSum==0) start=i;
        
        currSum+=nums[i];
        
        if(maxSum<currSum){
            maxSum=currSum;
            ansStart=start;
            ansEnd=i;
        }
        
        if(currSum<0){
            currSum=0;
        }
    }
    
    for(int i=ansStart;i<=ansEnd;i++)
        sol.push_back(nums[i]);
        
    cout<<maxSum<<endl;
    for(auto &it: sol)
        cout<<it<<" ";
    
    return 0;
}
