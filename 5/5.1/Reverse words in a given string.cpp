class Solution {
public:
    string reverseWords(string s) {
        int orgLen=s.length();
        int newLen=orgLen;
        
        s+=" ";
        while(newLen>-1){
            while(newLen>-1&&s[newLen]==' ')
                newLen--;
            
            if(newLen<0) break;

            int i=newLen-1;
            while(i>-1&&s[i]!=' ')
                i--;
            s+=s.substr(i+1, newLen-i)+' ';
            newLen=i-1;
        }
        s=s.substr(orgLen+1, s.length()-(orgLen+2));
        return s;
    }
};
