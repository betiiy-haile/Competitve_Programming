class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, len =0;
        int n = chars.size();
        
        while(i<n){
            int j=i;
            while(j<n && chars[j]==chars[i])
                j++;
            chars[len++] = chars[i];
            
            if(j-i > 1){
                for(char c: to_string(j-i))
                    chars[len++] = c;
            }
            i=j;
        }
        return len; 
    }
};