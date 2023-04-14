class Solution {
public:
    string removeOuterParentheses(string s) {
        int ctr=0;
        string sol;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(ctr!=0) sol.push_back(s[i]);
                ctr++;
            }
            else{
                if(ctr!=1) sol.push_back(s[i]);
                ctr--;
            }
        }   
        return sol;
    }
};
