class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lesser;
        vector<int>greater;
        int count=0;
        for( int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==pivot) count++;
            else if (nums[i]<pivot) lesser.emplace_back(nums[i]);
            else greater.emplace_back(nums[i]);
        }
        int k=0;
        if(lesser.size()>0)
        {
        for(int i=0;i<lesser.size();i++)
            nums[k++]=lesser[i];
        }
        if(count>0)
        {
        while(count>0)
        {
            nums[k++]=pivot;
            count--;
        }
        }
        if(greater.size()>0)
        {
        for(int i=0;i<greater.size();i++)
            nums[k++]=greater[i];
        }
        return nums;
    }
};