class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umpp;
        int sum=0;
        umpp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int element=sum-k;
            if(umpp.find(element)!=umpp.end())
            {
                ans=ans+umpp[element];
            }
            umpp[sum]++;
        }
        return ans;
    }
};