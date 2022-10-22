class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int result = 0;
        
        int n = piles.size()/3;
        int i = piles.size()-2;
        
        while(n--){
            result += piles[i];
            i -=2;
        }
        
        return result;
    }
};