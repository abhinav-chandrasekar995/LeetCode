class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>umpp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            umpp[nums[i]]++;
        }
        for ( auto it : umpp)
        {
            if ( it.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};