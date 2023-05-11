class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
        if(N<1) return 0;
        return pow(N, 3)+sumOfSeries(N-1);
    }
};
