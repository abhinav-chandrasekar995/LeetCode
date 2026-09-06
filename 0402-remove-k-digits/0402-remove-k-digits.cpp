class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        stack<char>st;
        for(char ch: num) {
            if (st.empty()) st.push(ch);
            else {
                while (!(st.empty()) && ch < st.top() && k > 0) {
                    st.pop();
                    k--;
                }
                st.push(ch);
            }
        }
        while (st.empty() == false && k>0) {
            st.pop();
            k--;
        }
        string sub="";
        while (!(st.empty())) {
            sub += st.top();
            st.pop();
        }
        reverse (sub.begin(),sub.end());
        int idx=0;
        while(idx<sub.size() && sub[idx]=='0') {
            idx++;
        }
        string ans=sub.substr(idx);
        if(ans.size()==0) return "0";
        return ans;
    }
};