class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++){
             if(s[i] == '(' )
                 st.push(i);
            else if(s[i] == ')'){
                int n = st.top() + 1;
                int m = i;
                reverse(s.begin()+n , s.begin()+m);
                st.pop();
            }
        }
        string result="";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == ')')
                continue;
            else 
                result.push_back(s[i]);
        }
        return result;
    }
};