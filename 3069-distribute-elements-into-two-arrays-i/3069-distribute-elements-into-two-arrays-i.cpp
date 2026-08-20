class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>nums1;
        vector<int>nums2;

        nums1.emplace_back(nums[0]);
        nums2.emplace_back(nums[1]);

        for(int i=2;i<nums.size();i++)
        {
            int num=nums[i];

            int n1=nums1.size();
            int n2=nums2.size();

            if(nums1[n1-1]>nums2[n2-1]) nums1.emplace_back(num);
            else nums2.emplace_back(num);
        }
        for (int num: nums2) {
            nums1.emplace_back(num);
        }
        return nums1;
    }
};