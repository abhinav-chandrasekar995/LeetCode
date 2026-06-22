class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for (int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        map<int,vector<int>,greater<int>>reverse;
        for(auto it : freq)
        {
            reverse[it.second].emplace_back(it.first);
        }
        vector<int>result;
        for(auto it : reverse)
        {
            for(int iz : it.second)
            {
                result.emplace_back(iz);
                if(result.size()==k)
                {
                    return result;
                }
            }
        }
        return result;
    }
};