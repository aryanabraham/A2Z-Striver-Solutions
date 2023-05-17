/*

In order to generate ANY given subsequence,
we can either choose to SELECT it or NOT.

eg. To generate the subsequence {3, 2},
the selection criteria on the original array is: ✔, x, ✔

This is what we are doing when we first 
push it into the subsequence (SELECT) and later
pop it (NOT SELECT)

NOTE: For better understanding, make recursion tree
with left sub-tree indicating SELECTING the element
and right sub-tree indicating NOT SELECTING it.

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nums={3, 1, 2};

void printNums(vector<int>& sol){
    for(auto &it: sol)
        cout<<it<<" ";
    cout<<endl;
}

void subSeq(int idx, vector<int>& sol){
    if(idx==nums.size()){
        printNums(sol);
        return;
    }
    sol.push_back(nums[idx]); // select an element
    subSeq(idx+1, sol);
    sol.pop_back(); // not select an element 
    subSeq(idx+1, sol);
}

int main(){
    vector<int> sol;
    
    subSeq(0, sol);
    return 0;
}

/*

TC: O(2^N*N), since for every index we have 2 options: 
either SELECTING it or NOT SELECTING it, and we are
using a for loop that runs till the length of the subsequence
to print it.

SC: O(N), since the maximum number of recursions awaiting
execution at any given point of time will be 3.
