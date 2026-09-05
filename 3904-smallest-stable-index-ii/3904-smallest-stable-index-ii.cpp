class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxarr;
        maxarr.resize(n);
        vector<int>minarr;
        minarr.resize(n);

        maxarr[0]=nums[0];
        minarr[n-1]=nums[n-1];

        for(int i=1;i<n;i++) {
            maxarr[i]=max(nums[i],maxarr[i-1]);
        }
        for(int i=n-2;i>=0;i--) {
            minarr[i]=min(nums[i],minarr[i+1]);
        }

        for(int i=0;i<n;i++) {
            if(maxarr[i]-minarr[i]<=k) return i;
        }
        return -1;
    }
};