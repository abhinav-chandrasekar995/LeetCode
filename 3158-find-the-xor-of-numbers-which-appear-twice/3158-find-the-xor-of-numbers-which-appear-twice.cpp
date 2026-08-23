class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>umpp;
        for(int num: nums) umpp[num]++;

        int ans=0;
        for(auto it: umpp) {
            if (it.second==2) ans^=it.first;
        }
        return ans;
    }
};