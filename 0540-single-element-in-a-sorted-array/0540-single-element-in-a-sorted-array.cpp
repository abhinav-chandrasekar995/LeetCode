class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low=1, high=n-2;

        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
            {
                ans = nums[mid];
                break;
            }
            if(nums[mid]==nums[mid+1])
            {
                if(mid%2==1) high=mid-1;
                else low=mid+2;
            }
            else
            {
                if(mid%2==0) high=mid-2;
                else low=mid+1;
            }
        }
        return ans;
    }
};