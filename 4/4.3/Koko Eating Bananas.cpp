class Solution {
public:
    long long timeTaken(vector<int>& piles, int k){
        long long tt=0;
        for(int i=0;i<piles.size();i++)
            tt+=(piles[i]/k)+((piles[i]%k)!=0);
        return tt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lowerBound=1;
        int upperBound=*max_element(piles.begin(), piles.end());

        while(lowerBound<=upperBound){
            int k=lowerBound+(upperBound-lowerBound)/2;
            long long tt=timeTaken(piles, k);
            
            if(tt<=h) upperBound=k-1;
            else lowerBound=k+1;
        }
        return lowerBound;
    }
};
