class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, len=0;
        vector<int> charIdx(256, -1);

        while(r<s.length()){
            if(charIdx[s[r]] != -1) l = max(l, charIdx[s[r]] + 1);

            charIdx[s[r]] = r;

            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};
