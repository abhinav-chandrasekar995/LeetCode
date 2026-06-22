class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxElement=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            maxElement=max(maxElement,nums[i]);
        }
        if(nums.size()<maxElement+1 || nums.size()>maxElement+1)
        return false;
        
        sort(nums.begin(),nums.end());

        int sum=(maxElement*(maxElement+1))/2;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=i+1) return false;
            sum-=nums[i];
        }
        if(sum!=0) return false;
        return true;
    }
};