class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>universe={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> answer;
        vector<int>store;
        recurse(0,universe,store,k,n,answer);
        return answer;
    }

    void recurse (int idx,vector<int>& universe, vector<int>& store, int k, int n, vector<vector<int>>& answer) {
        if (n<0 || store.size() > k) return;
        if (store.size() == k) {
            if (n==0) {
                answer.emplace_back(store);
            }
            return;
        }
        if (idx==9) return;
        store.emplace_back(universe[idx]);
        recurse(idx+1,universe,store,k,n-universe[idx],answer);
        store.pop_back();
        recurse(idx+1,universe,store,k,n,answer);
    }
};