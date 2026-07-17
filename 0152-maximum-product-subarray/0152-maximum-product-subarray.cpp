class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long leftrun=1;
        long long rightrun=1;
        long long maxleft=LLONG_MIN;
        long long maxright=LLONG_MIN;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                leftrun=1;
                maxleft=max(maxleft,0LL);
            }
            else
            {
                leftrun*=nums[i];
                maxleft=max(maxleft,leftrun);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
             if(nums[i]==0)
            {
                rightrun=1;
                maxright=max(maxright,0LL);
            }
            else
            {
                rightrun*=nums[i];
                maxright=max(maxright,rightrun);
            }
        }
        return max(maxleft,maxright);
    }
};