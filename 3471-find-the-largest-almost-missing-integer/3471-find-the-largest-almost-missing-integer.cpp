class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        for(int num: nums) {
            mpp[num]++;
        }
        int ans=-1;
        if (k==n) {
            for (auto it: mpp) {
                ans=max(ans,it.first);
            }
            return ans;
        }
        else if (k==1) {
            for (auto it: mpp) {
                if(it.second==1) {
                    ans=max(ans,it.first);
                }
            }
            return ans;
        }
        else {
            if (nums[0]>nums[n-1] && mpp[nums[0]]==1) ans=nums[0];
            else if (nums[n-1]>nums[0] && mpp[nums[n-1]]==1) ans=nums[n-1];
            else if (nums[0]>nums[n-1] && mpp[nums[0]]>1 && mpp[nums[n-1]]==1) ans=nums[n-1];
            else if (nums[n-1]>nums[0] && mpp[nums[n-1]]>1 && mpp[nums[0]]==1) ans=nums[0];
            else ans=-1;
        }
        return ans;
    }
};