class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxval=nums[0],minval=nums[0];
        long long ans;
        for(int i=0;i<nums.size();i++)
        {
            maxval=max(maxval,nums[i]);
            minval=min(minval,nums[i]);
        }
        ans=maxval-minval;
        return ans*k;
    }
};