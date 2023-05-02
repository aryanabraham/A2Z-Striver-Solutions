class Solution {
public:
    string largestOddNumber(string num) {
        string sol;
        int i=num.length()-1;

        for(;i>-1;i--)
            if((num[i]-'0')%2) break;
        
        for(;i>-1;i--) 
            sol.push_back(num[i]);
        
        reverse(sol.begin(), sol.end());
        return sol;
    }
};
