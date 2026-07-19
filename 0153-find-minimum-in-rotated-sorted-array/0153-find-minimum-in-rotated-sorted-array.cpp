class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            ans=min(ans,nums[mid]);
            if(nums[low]<=nums[mid] && nums[mid]<=nums[high] && nums[low]<=ans)
            {
                ans=min(ans,nums[low]);
                break;
            }
            else
            {
                if(nums[low]>nums[mid]) high=mid-1;
                else low=mid+1;
            }
        }
        return ans;
    }
};