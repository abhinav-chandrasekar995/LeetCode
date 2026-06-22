class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
        for(int i=0;i<s.size();i+=k)
        {
            string sub=s.substr(i,k);
            if(i%(2*k)==0)
            {
            reverse(sub.begin(),sub.end());
            ans+=sub;
            }
            else
            {
                ans+=sub;
            }
        }
        return ans;
    }
};