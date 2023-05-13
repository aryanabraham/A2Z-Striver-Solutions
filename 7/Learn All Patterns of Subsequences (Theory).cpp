class Solution {
  public:
  
    int generateSubseq(int idx, int len, string& str, string& temp, unordered_set<string>& uniqueSubseq){
        if(idx==len){
            if(!temp.length()) return 0;
            
            auto it=uniqueSubseq.find(temp);
            if(it==uniqueSubseq.end()){
                uniqueSubseq.insert(temp);
                return 1;
            }
            return 0;
        }
        
        temp.push_back(str[idx]);
        int leftRec=generateSubseq(idx+1, str.length(), str, temp, uniqueSubseq);
        
        temp.pop_back();
        int rightRec=generateSubseq(idx+1, str.length(), str, temp, uniqueSubseq);
        
        return leftRec+rightRec;
    }
  
    string betterString(string str1, string str2) {
        // code here
        string temp;
        unordered_set<string> uniqueSubseq;
        
        int ctr1=generateSubseq(0, str1.length(), str1, temp, uniqueSubseq);
        
        temp.clear();
        uniqueSubseq.clear();
        
        int ctr2=generateSubseq(0, str2.length(), str2, temp, uniqueSubseq);
        
        return ctr1>=ctr2?str1:str2;
    }
};
