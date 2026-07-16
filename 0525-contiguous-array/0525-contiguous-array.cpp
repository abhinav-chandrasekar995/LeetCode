class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int>prefixSum;
        int runningSum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) runningSum-=1;
            else runningSum+=1;
            prefixSum.emplace_back(runningSum);
        }
        unordered_map<int,int>umpp;
        umpp[0]=-1;
        int ans=0;
        for(int i=0;i<prefixSum.size();i++)
        {
            if(umpp.find(prefixSum[i])==umpp.end())
            {
                umpp[prefixSum[i]]=i;
            }
            else
            {
                ans=max(ans,i-umpp[prefixSum[i]]);
            }
        }
        return ans;
    }
};