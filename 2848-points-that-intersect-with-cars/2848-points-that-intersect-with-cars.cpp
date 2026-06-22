class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums[i][1];j>=nums[i][0];j--)
            {
                mpp[j]++;
            }
        }
        return mpp.size();
    }
};