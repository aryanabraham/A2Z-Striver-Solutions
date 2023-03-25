// CRUX: If insertion from b i.e. a[i] > b[j], everything to the right of i [a.size()-i] gets added

#include <bits/stdc++.h>
using namespace std;

int merge(int l, int mid, int r, vector<int>& nums){
    vector<int> a, b;
    int i, j, k, invCtr=0;
    int n1=mid-l+1, n2=r-mid;
    
    for(i=0;i<n1;i++)
        a.push_back(nums[l+i]);
    for(j=0;j<n2;j++)
        b.push_back(nums[mid+1+j]);
    
    i=j=0;
    k=l;
    
    while(i<n1&&j<n2){
        if(a[i]<b[j]) nums[k++]=a[i++];
        else{
            nums[k++]=b[j++];
            invCtr+=n1-i;
        }
    }
    while(i<n1) nums[k++]=a[i++];
    while(j<n2) nums[k++]=b[j++];
    
    return invCtr;
}   

int mergeSort(int l, int r, vector<int>& nums){
    int invCtr=0;
    
    if(l<r){
        int mid=l+(r-l)/2;
        
        invCtr+=mergeSort(l, mid, nums);
        invCtr+=mergeSort(mid+1, r, nums);
        invCtr+=merge(l, mid, r, nums);
    }
    return invCtr;
}

int main(){
    vector<int> nums={30, 50, 20, 10, 40};
    int invCtr=mergeSort(0, nums.size()-1, nums);
    
    cout<<invCtr;
    return 0;
}
