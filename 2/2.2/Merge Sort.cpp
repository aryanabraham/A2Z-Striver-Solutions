#include <bits/stdc++.h>
using namespace std;

void merge(int l, int mid, int r, vector<int>& nums){
    int i, j, k;
    vector<int> a, b;
    int n1=mid-l+1, n2=r-mid;
    
    for(int i=0;i<n1;i++) a.push_back(nums[l+i]);
    for(int j=0;j<n2;j++) b.push_back(nums[mid+j+1]);
    
    i=j=0;
    k=l;
    
    while(i<n1&&j<n2){
        if(a[i]<b[j]) nums[k++]=a[i++];
        else nums[k++]=b[j++];
    }
    while(i<n1) {nums[k++]=a[i++];}
    while(j<n2) {nums[k++]=b[j++];}
}

void mergeSort(int l, int r, vector<int>& nums){
    if(l<r){
        int mid=l+(r-l)/2;
        
        mergeSort(l, mid, nums);
        mergeSort(mid+1, r, nums);
        merge(l, mid, r, nums);
    }
}

int main(){
    vector<int> nums={30, 10, 50, 20, 40};
    
    mergeSort(0, nums.size()-1, nums);
    for(auto &it: nums)
        cout<<it<<" ";
    return 0;
}
