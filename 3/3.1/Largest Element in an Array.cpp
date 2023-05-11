class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int lrg=INT_MIN;
        
        for(int i=0;i<n;i++)
            lrg=max(lrg, arr[i]);
        return lrg;
    }
};
