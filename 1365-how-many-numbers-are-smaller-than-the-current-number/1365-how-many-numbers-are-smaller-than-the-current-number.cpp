class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(102);
        
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        
        vector<int> result;
        
        for(int i=0; i<nums.size(); i++){
            int total=0;
            for(int j=0; j< nums[i]; j++)
                total+=count[j];
            result.push_back(total);
        }
        
        return result;
    }
};
