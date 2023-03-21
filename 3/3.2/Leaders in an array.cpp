class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int i, max=INT_MIN;
        vector<int> sol;
        
        for(i=n-1;i>=0;i--){
            if(a[i]>=max){
                sol.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }
};
