class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x=k%nums.size();
        vector<int>duplicate;
        for(int i=nums.size()-x;i<nums.size();i++)
        {
            duplicate.emplace_back(nums[i]);
        }
        for(int i=0;i<=nums.size()-x-1;i++)
        {
            duplicate.emplace_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=duplicate[i];
        }
    }
};