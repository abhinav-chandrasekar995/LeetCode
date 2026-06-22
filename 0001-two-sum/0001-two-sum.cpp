class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umpp;
        for(int i=0;i<nums.size();i++)
        {
            int check=target-nums[i];
            if(umpp.find(check)!=umpp.end())
            {
                return{umpp[check],i};
            }
            else umpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};