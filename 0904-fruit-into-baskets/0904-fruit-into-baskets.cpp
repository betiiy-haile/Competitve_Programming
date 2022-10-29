class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = -1;
        int j= -1;
        int count =0;
        int currentMax = 0;
        int maxLen =0;
        
        for(auto fruit: fruits){
            if(fruit == i || fruit == j)
                currentMax += 1;
            else
                currentMax = count + 1;
            
            if(fruit == i)
                count += 1;
            else
                count = 1;
            
            if(fruit != i){
                j = i;
                i = fruit;
            }
            maxLen = max(currentMax, maxLen);
        }
        return maxLen;
    }
};