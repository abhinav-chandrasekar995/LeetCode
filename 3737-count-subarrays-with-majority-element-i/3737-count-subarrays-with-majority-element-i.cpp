class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            unordered_map<int,int>umpp;
            int count=0;
            for(int j=i;j<nums.size();j++)
            {
                umpp[nums[j]]++;
                count++;
                if(2*umpp[target]>count) ans++;
            }
        }
        return ans;
    }
};