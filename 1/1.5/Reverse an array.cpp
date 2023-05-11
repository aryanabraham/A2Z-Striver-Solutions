// Couldn't write the code for verbatim as the GFG link had expired,
// but this code will reverse an array using recursion

#include <bits/stdc++.h>
using namespace std;

void revArr(vector<int>& nums, int n){
    if(n<nums.size()/2){
        swap(nums[n], nums[nums.size()-n-1]);
        revArr(nums, n+1);
    }    
}

int main(){
    vector<int> nums={1, 2, 3, 4, 5};
    
    revArr(nums, 0);
    for(auto &it: nums)
        cout<<it<<" ";
    return 0;
}
