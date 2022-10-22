class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        int j = mid+1, i = 0;
        
        vector<int> result;
        
        while(i<=mid && j<nums.size()){
            result.push_back(nums[i++]);
            result.push_back(nums[j++]);
        }
        while(i<=mid){
            result.push_back(nums[i++]);
        }
        while(j<nums.size()){
            result.push_back(nums[j++]);
        }
        
        return result;
    }
};