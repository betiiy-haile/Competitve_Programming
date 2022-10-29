class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pro = 1;
        vector<int> answer;
        
        for(int i=0; i<n; i++){
            pro *= nums[i];
            answer.push_back(pro);
        }
        
        pro =1;
        for(int i=n-1; i>0; --i){
            answer[i] = answer[i-1]*pro;
            pro *= nums[i];
        }
        answer[0] = pro;
        return answer;
    }
};