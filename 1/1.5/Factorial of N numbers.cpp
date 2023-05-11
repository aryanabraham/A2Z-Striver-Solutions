class Solution
{
public:
    long long fact(long long N){
        if(N==1) return 1;
        return N*fact(N-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        int i=1;
        vector<long long> sol;
        
        while(fact(i)<=N){
            sol.push_back(fact(i));
            i++;
        }
        return sol;
    }
};
