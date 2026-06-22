class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>answer;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k]; sum+=nums[l];
                    if(sum==target)
                    {
                        vector<int>subans;
                        subans.emplace_back(nums[i]);
                        subans.emplace_back(nums[j]);
                        subans.emplace_back(nums[k]);
                        subans.emplace_back(nums[l]);
                        answer.emplace_back(subans);
                        k++;
                        while(k>j&&k<l&&nums[k]==nums[k-1])k++;
                        l--;
                        while(l>k&&l<n-1&&nums[l]==nums[l+1])l--;
                        continue;
                    }
                    else if (sum>target)
                    {
                        l--;
                        while(l>k&&l<n-1&&nums[l]==nums[l+1])l--;
                    }
                    else
                    {
                        k++;
                        while(k>j&&k<l&&nums[k]==nums[k-1])k++;
                    }
                }
            }
        }
        return answer;
    }
};