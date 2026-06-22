class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
       unordered_map<string,vector<string>>umpp;
       for(int i=0;i<strs.size();i++)
       {
        string a=strs[i];
        sort(a.begin(),a.end());
        umpp[a].emplace_back(strs[i]);
       }
       for(auto it:umpp)
       {
        ans.emplace_back(it.second);
       }
       return ans;
    }
};
