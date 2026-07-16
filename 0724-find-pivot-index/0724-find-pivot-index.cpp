class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>leftSum;
        vector<int>rightSum;
        int ls=0;
        int rs=0;
        for(int i=0;i<nums.size();i++)
        {
            ls+=nums[i];
            leftSum.emplace_back(ls);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            rs+=nums[i];
            rightSum.emplace_back(rs);
        }
        reverse(rightSum.begin(),rightSum.end());
        int ans=-1;
        for(int i=0;i<leftSum.size();i++)
        {
            if(leftSum[i]==rightSum[i])
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};