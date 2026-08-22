class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mpp;
        for(int i=0; i<nums.size(); i++) {
            mpp[nums[i]].emplace_back(i);
        }
        for(auto it: mpp) {
            if(it.second.size()>1){
            for(int i=1;i<it.second.size();i++) {
                if(it.second[i]-it.second[i-1]<=k) return true;
            }
        }
        }
        return false;
    }
};