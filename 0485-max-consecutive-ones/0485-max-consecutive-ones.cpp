class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>result;
        int count=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                result.emplace_back(count);
                count=0;
            }
            result.emplace_back(count);
        }
        int max=-1;
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i]>max)
            {
                max=result[i];
            }
        }
        return max;
    }
};