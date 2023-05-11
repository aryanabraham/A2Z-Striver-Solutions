class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N){
            cout<<"GFG ";
            N--;
            printGfg(N);
        }
    }
};
