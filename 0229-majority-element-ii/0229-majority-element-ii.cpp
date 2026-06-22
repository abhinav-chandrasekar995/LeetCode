class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>umpp;
        for(int i=0;i<size;i++)
        {
            umpp[nums[i]]++;
        }
        vector<int>result;
        for(auto it : umpp)
        {
            if (it.second>(size/3))
            {
                result.emplace_back(it.first);
            }
        }
        return result;
    }
};