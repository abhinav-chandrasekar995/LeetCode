class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxidx=0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(i>maxidx) return false;
            maxidx=max(maxidx,nums[i]+i);
        }
        return true;
    }
};