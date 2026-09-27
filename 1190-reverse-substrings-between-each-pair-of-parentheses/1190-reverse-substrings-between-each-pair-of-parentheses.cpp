class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        for (char ch: s) {
            if (ch == ')') {
                string builder = "";
                while (!(st.empty()) && st.top() != "(") {
                    builder = st.top() + builder;
                    st.pop();
                }
                st.pop();
                reverse (builder.begin(),builder.end());
                st.push(builder);
            }
            else {
                st.push(string(1,ch));
            }
        }
        string ans = "";
        while (!(st.empty()))
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};