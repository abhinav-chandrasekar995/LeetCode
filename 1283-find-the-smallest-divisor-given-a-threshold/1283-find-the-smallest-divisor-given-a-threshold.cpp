class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=1e9;
        int maxele=-1e9;
        for(int num: nums){
            maxele=max(maxele,num);
        }
        int low=1,high=maxele;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long sum=0;
            for(int num: nums){
                sum += ceil(double(num)/mid);
            }
            if (sum<=threshold)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};