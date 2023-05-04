class Solution {
public:
    int maxDepth(string s) {
        int ctr=0;
        int nestingDepth=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(') ctr++;
            else if(s[i]==')'){
                nestingDepth=max(nestingDepth, ctr);
                ctr--;
            }
        }
        return nestingDepth;
    }
};
