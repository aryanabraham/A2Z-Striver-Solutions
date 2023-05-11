class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N){
            cout<<N<<" ";
            printNos(N-1);
        }
    }
};
