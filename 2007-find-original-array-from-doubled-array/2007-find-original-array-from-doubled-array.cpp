class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(), changed.end());
                
        map<int, int> count;
        vector<int> original;
               
        
        for(int i=0; i<changed.size(); i++)
        {
            count[changed[i]]++;
        }
        for(int i=0; i<changed.size(); i++)
        {
            int freq= count[changed[i]];
            
            if(freq>0)
            {
                int doubled = changed[i] * 2;
                original.push_back(changed[i]);
                count[changed[i]]--;
                count[doubled]--;
            }
        }
        if(original.size()== changed.size()/2)
            return original;
        return {};
    }
};