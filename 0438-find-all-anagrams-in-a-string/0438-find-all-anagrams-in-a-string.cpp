class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;

        int left = 0, right = 0;
        int s_size = s.size();
        int p_size = p.size();

        unordered_map <char, int> umpp_p;
        for (char ch: p) umpp_p[ch]++;

        unordered_map <char, int> umpp_s;
        while (right < s_size) {
            if (right - left + 1 < p_size) {
                umpp_s[s[right]]++;
                right++;
            }
            else if (right - left + 1 == p_size) {
                umpp_s[s[right]]++;
                if (umpp_s == umpp_p) ans.emplace_back(left);
                right++;
            }
            else {
                umpp_s[s[left]]--;
                if(umpp_s[s[left]]==0) umpp_s.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};