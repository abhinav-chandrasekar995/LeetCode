class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>umpp;
        for(int i=0;i<nums.size();i++)
        {
            umpp[nums[i]]++;
        }
        for(auto it:umpp)
        {
            if(it.second>1)
            {
                result.emplace_back(it.first);
            }
        }
    return result;
    }
};