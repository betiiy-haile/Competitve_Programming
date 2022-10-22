class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> m;
        int count = 0;
        for(auto it: arr){
            m[it]++;
        }
        
        multimap<int, int, greater<int>> mu;
        for(auto it: m){
            mu.insert({it.second, it.first});
        }
        
        int n= arr.size();
        int sum = n;
        for(auto i = mu.begin(); i!= mu.end(); i++){
            sum -= i->first;
            count++;
            
            if(sum<=n/2)
                return count;
        }
        return count;
    }
};