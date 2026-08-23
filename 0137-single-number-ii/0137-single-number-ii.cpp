class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        long long prod=1;
        for(int i=0;i<32;i++) {
            int count=0;
            for(int num: nums) {
                if((num & (1<<i)) != 0) count++;
            }
            if(count%3==1) {
                ans += prod;
            }
            prod*=2;
        }
        return ans;
    }
};