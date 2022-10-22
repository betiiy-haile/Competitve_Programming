class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int result = 0;

        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==k){
                result++;
                i++;
                j--;
            }
            if(nums[i]+nums[j]>k){
                j--;
            }
            if(nums[i]+nums[j]<k){
                i++;
            }
        }
        return result;
    }
};