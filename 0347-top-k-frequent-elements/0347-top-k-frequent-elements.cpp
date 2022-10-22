class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        map<int, int> m;
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        
        vector< pair<int, int>> result;
        for(auto i=m.begin(); i!=m.end(); i++)
            result.push_back({i->second, i->first});
        
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end());
        
        vector<int> ans(k);
        for(int i=0; i<k; i++)
            ans[i] = result[i].second;
        
        return ans;
    }
};