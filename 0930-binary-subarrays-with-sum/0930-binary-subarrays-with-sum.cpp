class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        long long ans = 0;
        unordered_map <int,int> umpp;
        int n = nums.size();
        int sum = 0;
        umpp[0] = 1;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            int finding = sum - goal;
            if(umpp.find(finding) != umpp.end()) ans += umpp[finding];
            umpp[sum]++;
        }
        return ans;
    }
};