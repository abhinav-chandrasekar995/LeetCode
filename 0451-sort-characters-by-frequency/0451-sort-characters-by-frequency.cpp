class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>umpp;
        string ans="";
        for (int i=0;i<s.size();i++)
        {
            umpp[s[i]]++;
        }
        map<int,vector<char>,greater<int>>mpp;
        for (auto it:umpp)
        {
            mpp[it.second].emplace_back(it.first);
        }
        for (auto it:mpp)
        {
            for (char ch:it.second)
            {
                ans.append(it.first,ch);
            }
        }
        return ans;
    }
};