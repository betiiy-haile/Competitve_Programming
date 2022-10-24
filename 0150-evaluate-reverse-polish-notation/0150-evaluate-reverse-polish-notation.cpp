class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string i: tokens){
            if(i=="+"){
                int n= st.top();
                st.pop();
                int m = st.top();
                st.pop();
                st.push(n+m);
            }
             else if(i=="-"){
                int n= st.top();
                st.pop();
                int m = st.top();
                st.pop();
                st.push(m-n);
            }
             else if(i=="*"){
                long long n= st.top();
                st.pop();
                long long m = st.top();
                st.pop();
                 m*=n;
                st.push(m);
            }
             else if(i=="/"){
                int n= st.top();
                st.pop();
                int m = st.top();
                st.pop();
                st.push(m/n);
            }
            else 
                st.push(stoi(i));
        }
        return st.top();
    }
};