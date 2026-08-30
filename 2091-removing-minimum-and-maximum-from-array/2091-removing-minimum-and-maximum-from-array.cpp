class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maximum=-1e9;
        int minimum=1e9;
        int min_idx=-1,max_idx=-1;

        int n=nums.size();

        for(int i=0;i<n;i++) {
            if(nums[i]<minimum) {
                minimum=nums[i];
                min_idx=i;
            }
             if(nums[i]>maximum) {
                maximum=nums[i];
                max_idx=i;
            }
        }
        if (n==1) return 1;
        // left only scenario
        int case1=max(min_idx,max_idx);
        int newcase1=case1+1;
        // right only scenario
        int case2=min(min_idx,max_idx);
        int newcase2=n-case2;

        int intermediate1=min(newcase1,newcase2);

        // left and right scenario
        int intermediate2=-1;
        if(min_idx<max_idx) {
            int newcase3=min_idx+1 + n-max_idx;
            intermediate2=newcase3;
        }
        else {
            int newcase4=max_idx+1 + n-min_idx;
            intermediate2=newcase4;
        }
        return min(intermediate1,intermediate2);
    }
};