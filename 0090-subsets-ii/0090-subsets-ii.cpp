class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>store;
        vector<vector<int>>answer;
        recurse(0,n,nums,store,answer);
        return answer;
    }
    void recurse(int index, int n, vector<int>& nums, vector<int>& store, vector<vector<int>>& answer) {
            answer.emplace_back(store);

        for (int i=index;i<n; i++) {
            if (i>index && nums[i]==nums[i-1]) continue;

            store.emplace_back(nums[i]);
            recurse(i+1, n, nums, store, answer);
            store.pop_back();
        }
    }
};