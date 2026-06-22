class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum; vector<int> rightSum;
        vector<int> answer;
        int sum=0;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            leftSum.emplace_back(sum);
            sum+=nums[i];
        }
        sum=0;
        for( int i = nums.size()-1 ; i >= 0 ; i-- )
        {
            rightSum.emplace_back(sum);
            sum+=nums[i];
        }
        for( int i=0,j=nums.size()-1; i<nums.size(),j>=0 ; i++,j-- )
        {
            answer.emplace_back(abs(leftSum[i]-rightSum[j]));
        }
        return answer;
    }
};