class Solution {
public:
    string sortSentence(string s) {
        string sentence;
        vector<string>v(10);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                v[s[i]-48] = sentence + " ";
                sentence = ""; 
                i++;
            }
            else sentence += s[i];
        }
        string word;
        for(string x:v)
            word += x;
        word.pop_back();
        return word;
    }
};