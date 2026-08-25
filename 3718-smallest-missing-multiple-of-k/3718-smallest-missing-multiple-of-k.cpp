class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=k;

        map<int,int>mpp;

        for(int num: nums) mpp[num]++;

        for(auto it: mpp) {
            if(mpp.find(ans)==mpp.end()) break;
            else ans+=k;
        }
        return ans;
    }
};