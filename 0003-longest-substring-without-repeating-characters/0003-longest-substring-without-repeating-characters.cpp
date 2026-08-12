class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int ans=-1e9;
        int arr[256]={0};
        int n=s.size();
        if (n==0) return 0;
        for(int j=0;j<n;j++){
            char ch = s[j];
            if (arr[ch] > 0) {
                while (arr[ch] > 0) {
                    arr[s[i]]--;
                    i++;
                }
            }
            arr[ch]++;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};