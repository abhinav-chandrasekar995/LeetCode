class Solution {
public:
    vector<vector<int>>answer;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>store;
        recurse(candidates, target, 0,0,n,store);
        return answer;
    }
    void recurse(vector<int>& candidates, int target, int sum, int index, int n, vector<int>& store) {

        if (sum>target) return;
        if (index==n) {
            if(sum==target) {
                answer.emplace_back(store);
            }
            return;
        }
        store.emplace_back(candidates[index]);
        recurse(candidates,target,sum+candidates[index],index,n,store);

        store.pop_back();
        recurse(candidates,target,sum,index+1,n,store);
    }
};