class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>store;
        vector<int>bucket;
        vector<bool>flag(nums.size(),false);
        recurse(nums,store,bucket,flag);
        for(vector<int> ele: store) ans.emplace_back(ele);
        return ans;
    }

    void recurse(vector<int>& nums, set<vector<int>>& store, vector<int>& bucket,vector<bool>& flag) {
        if(bucket.size() == nums.size()) {
            store.insert(bucket);
            return;
        }
        for(int i=0;i<nums.size();i++) {
            if(flag[i]==false) {
                flag[i]=true;
                bucket.emplace_back(nums[i]);
                recurse(nums,store,bucket,flag);
                bucket.pop_back();
                flag[i]=false;
            }
        }
    }
};