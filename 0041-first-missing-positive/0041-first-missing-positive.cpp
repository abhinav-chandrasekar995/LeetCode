#include<utility>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            while (nums[i]>0 && nums[i] <= nums.size() && nums[nums[i]-1] != nums[i]) {
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        int ans=1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==i+1) {
                ans++;
                continue;
            } 
            else return ans;
        }
        return ans;
    }
};