class Solution {
public:
vector<vector<int>>answer;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int>store;
        recurse(candidates,target,0,n,0,store);

        set<vector<int>>newset;
        for(vector<int>candidate: answer) newset.insert(candidate);
        answer.clear();
        for(vector<int>candidate: newset) answer.emplace_back(candidate);
        return answer;
    }

    void recurse(vector<int>& candidates, int target, int sum, int n, int i, vector<int>& store) {
        if (sum>target) return;

        if (i == n) {
            if (sum == target) {
                answer.emplace_back(store);
            }
            return;
        }
        sum += candidates[i];
        store.emplace_back(candidates[i]);
        recurse(candidates,target,sum, n, i+1, store);

        sum -= candidates[i];
        store.pop_back();

        int j=i+1;

        while (j<n && candidates[i]==candidates[j]) j++;
        
        recurse(candidates,target,sum,n, j, store);
        return;
    }
};