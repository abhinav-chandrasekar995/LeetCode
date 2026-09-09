class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>umpp;
        int ans=-1e9;
        int left=0,right=0;
        while(right<n) {
            umpp[fruits[right]]++;
            if(umpp.size()>2) {
                while(umpp.size()>2) {
                umpp[fruits[left]]--;
                if(umpp[fruits[left]]==0) umpp.erase(fruits[left]);
                left++;
                }
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};