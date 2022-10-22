class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<int> v;
        vector<bool> result;
        for(int j=0;j<l.size();j++)
        {
          for(int i = l[j];i<=r[j];i++)
          {
              v.push_back(nums[i]);
          }
            sort(v.begin(),v.end());
            bool a;
            int d = v[1] - v[0];
            for(int i=1;i<v.size();i++)
            {
                if((v[i]-v[i-1]) == d){
                    a = true;
                }
                else{
                    a = false;
                    break;
                }
            }
            result.push_back(a);
            v.clear();
     }
        return result;
    }
};