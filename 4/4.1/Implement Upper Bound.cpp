pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int, int> sol;
    int low=0, high=n-1;
    int flr=-1, cl=-1;
    
    sort(arr, arr+n);
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(arr[mid]<x){
            flr=arr[mid];
            low=mid+1;
        }
        else if(arr[mid]>x){
            cl=arr[mid];
            high=mid-1;
        }
        else{
            flr=cl=arr[mid];
            break;
        }
    }
    sol={flr, cl};
    return sol;
}
