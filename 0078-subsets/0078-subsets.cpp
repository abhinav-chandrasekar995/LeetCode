class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        int n=nums.size();
        vector<int>store;
        recurse(0,n,nums,store,answer);
        return answer;
    }
    void recurse(int index,int n, vector<int>& nums, vector<int>& store, vector<vector<int>>& answer)
    {
        if(index==n) {
            answer.emplace_back(store);
            return;
        }
        recurse(index+1,n,nums,store,answer);
        store.emplace_back(nums[index]);
        recurse(index+1,n,nums,store,answer);
        store.pop_back();
    }
};