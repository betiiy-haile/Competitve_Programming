class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        int avg = sum/k;
        int count = avg >= threshold ? 1 : 0;
        
        int left = 1;
        int right = k;
        
        while(right < arr.size()){
            sum -= arr[left-1];
            sum += arr[right];
            avg = sum/k;
            
            if(avg >= threshold)
                count++;
            
            left++;
            right++;
        }
        return count;
    }
};