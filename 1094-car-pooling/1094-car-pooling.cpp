class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        vector<vector<int>>v;
        
        for(int i=0; i<n;i++){
            v.push_back({trips[i][1],1, trips[i][0]});
            v.push_back({trips[i][2],0, trips[i][0]});
        }
        sort(v.begin(), v.end());
        int x=0;
        for(int i=0; i<v.size(); i++){
            if(v[i][1]==1)
                x+=v[i][2];
            else
                x-=v[i][2];
            if(x>capacity)
                return false;
        }
        return true;
    }
};