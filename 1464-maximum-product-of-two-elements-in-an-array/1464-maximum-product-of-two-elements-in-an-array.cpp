class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        int maxnum=-1e9;
        for(int i=0;i<n;i++){
            if(nums[i]>maxnum){
                maxnum=nums[i];
                idx=i;
            }
        }
        int secmax=-1e9;
        for(int i=0;i<n;i++){
            if(nums[i]>secmax && i!=idx){
                secmax=nums[i];
            }
        }
        return (maxnum-1)*(secmax-1);
    }
};