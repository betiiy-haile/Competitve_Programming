class Solution {
public:
    int maxArea(vector<int>& height) {
      int w=0, l=0, r=height.size()-1;
        while(l<r){
            int a;
            a= min(height[l], height[r]) * (r-l);
            if(height[l] < height[r]){
            
                l++;
            }
            else{
                
                r--;
            }
            if(a > w)
                w=a;
        }
        return w;
    }
};