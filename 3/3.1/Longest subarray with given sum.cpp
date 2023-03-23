#include <bits/stdc++.h>
using namespace std;

int main(){
    int k=3, maxLen=0, currSum=0;
    unordered_map<int, int> preSumIdx;
    vector<int> nums={2, 0, 0, 3};
    
    preSumIdx.insert({0, -1});
    for(int i=0;i<nums.size();i++){
        currSum+=nums[i];
        
        auto it=preSumIdx.find(currSum-k);
        if(it!=preSumIdx.end())
            maxLen=max(maxLen, i-(it->second));
        else
            preSumIdx.insert({currSum, i});
    }
    cout<<maxLen;
    return 0;
}
