class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int maxSum = 0 ;
        
        int i=0;
        int j= nums.size()-1;
        while(i<j){
            sum = nums[i] + nums[j];
            maxSum = max(sum, maxSum);
            i++;
            j--;
        }
        return maxSum;
    }
};