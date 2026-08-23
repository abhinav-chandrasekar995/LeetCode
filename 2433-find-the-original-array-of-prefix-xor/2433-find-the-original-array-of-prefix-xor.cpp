class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        ans.emplace_back(pref[0]);
        int run=pref[0];
        for(int i=1;i<pref.size();i++) {
            ans.emplace_back(run^pref[i]);
            run^=ans[i];
        }
        return ans;
    }
};