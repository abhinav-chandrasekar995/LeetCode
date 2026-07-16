class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int sum=nums[0];
        ans.emplace_back(sum);
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            ans.emplace_back(sum);
        }
        return ans;
    }
};