class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        double dist ;
        multimap< double , vector<int> >v ;
        for(auto x : points){
            dist = sqrt(x[0]*x[0] + x[1]*x[1]) ;
            v.insert({dist , {x[0] , x[1]} });
        }
        vector<vector<int>>ans ;
        int num = 0 ;
        for(auto x : v ){
            num++ ;
            if( num > k )
                break;
            ans.push_back(x.second) ;
        }
        return ans ;
    }
};