class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        unordered_map <string,string> umpp;
        int n = knowledge.size();

        for(int i = 0; i < n;  i++) {
            umpp[knowledge[i][0]]=knowledge[i][1];
        }
        int s_size = s.size();
        for (int i = 0; i < s_size; i++) {
            if (s[i] == '(') {
                string key = "";
                int j = s.find(")", i+1);
                key = s.substr(i+1, j-i-1);
                if (umpp.find(key) != umpp.end()) {
                    ans+=umpp[key];
                    i=j;
                }
                else {
                    ans+="?";
                    i=j;
                }
            }
            else ans+=s[i];
        }
        return ans;
    }
};