class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        int vCount = 0;
        
        for(int i=0; i<k; i++){
            if(vowels.find(s[i]) != vowels.end())
                vCount++;
        }
        
        int left = 0;
        int right = k-1;
        int maxCount = vCount;
        
        while(right < s.size()){
            if(vowels.find(s[left]) != vowels.end())
                vCount--;
            right++;
            left++;
            if(vowels.find(s[right]) != vowels.end())
                vCount++;
            maxCount = max(maxCount, vCount);
        }
        return maxCount;
    }
};