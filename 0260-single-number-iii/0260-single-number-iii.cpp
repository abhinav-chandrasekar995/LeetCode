class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans=0;
        for(int num: nums) {
            ans = ans^num;
        }
        int idx=0;
        for(int i=0;i<32;i++) {
            if((ans & (1<<i)) != 0) {
                idx=i;
                break;
            }
        }
        int bucket1=0;
        int bucket2=0;

        for(int num: nums) {
            if ((num & (1<<idx)) != 0 ) bucket1^=num;
            else bucket2^=num;
        }
        return {bucket1,bucket2};
    }
};