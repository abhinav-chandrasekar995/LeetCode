class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int ans=1e9;
        int low=-1e9;
        int high=0;
        for(int num: nums){
            low=max(low,num);
            high+=num;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int splits=1;
            long long runningsum=0;
            for(int num: nums){
                if(runningsum+num<=mid){
                    runningsum+=num;
                }
                else{
                    splits++;
                    runningsum=num;
                }
                }
                if(splits<=k){
                    ans=min(ans,mid);
                    high=mid-1;
                }
                else low=mid+1;
        }
        return ans;
    }
};