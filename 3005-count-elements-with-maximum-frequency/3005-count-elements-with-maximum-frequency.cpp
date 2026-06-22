class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int max=freq[0];
        for(int i=0;i<101;i++)
        {
            if(max<freq[i])max=freq[i];
        }
        int ans=0;
        for(int i=0;i<101;i++)
        {
            if(freq[i]==max)ans=ans+freq[i];
        }
        return ans;
    }
};