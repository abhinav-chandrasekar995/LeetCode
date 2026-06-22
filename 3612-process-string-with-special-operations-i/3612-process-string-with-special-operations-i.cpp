class Solution {
public:
    string processStr(string s) {
        string ans="";
        for (int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                if(ans.empty()==0) // or we can do ans=ans.substr(0,ans.size()-1)
                ans.pop_back();
            }
            else if(s[i]=='#') 
            {
                ans=ans+ans;
            }
            else if(s[i]=='%')
            {
                reverse(ans.begin(),ans.end());
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};