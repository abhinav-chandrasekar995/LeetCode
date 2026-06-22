class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>answer;
        for(int i=0;i<=nums.size()-3;i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int low=i+1;
            int high=nums.size()-1;
            while((i != low)&&(low != high)&&(i != high)&&(low < high))
            {
                vector<int>sub;
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0) 
                {
                    sub.emplace_back(nums[i]);
                    sub.emplace_back(nums[low]);
                    sub.emplace_back(nums[high]);
                    answer.emplace_back(sub);
                    low=low+1;
                    high=high-1;
                    while(low < high && nums[low] == nums[low-1]) low+=1;
                    while(low < high && nums[high] == nums[high+1]) high--;
                }
                else if(sum<0) low+=1;
                else high-=1;
            }
        }
        return answer;
    }
};