class Solution {
public:
    int reverseDegree(string s) {
        int i = 1;
        long long ans = 0;
        for(char ch: s) {
            ans += (('z'- ch)+1)*(i++);
        }
        return ans;
    }
};