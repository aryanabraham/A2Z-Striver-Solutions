class Solution{
public:
    int findFloor(vector<long long> v, long long n, long long x){
        int kIdx=-1;
        long long l=0, r=n-1,k=-1;
        
        while(l<=r){
            long long mid=l+(r-l)/2;
            
            if(v[mid]<x){
                k=max(k, v[mid]);
                kIdx=mid;
                l=mid+1;
            }
            else if(v[mid]>x)
                r=mid-1;
            else 
                return mid;
        }
        return kIdx;
    }
};
