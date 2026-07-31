class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=g.size()-1;
        int j=s.size()-1;
        long long ans=0;
        while(i>=0 && j>=0){
            if(s[j]>=g[i]) {
                ans+=1;
                i--;
                j--;
            }
            else i--;
        }
        return ans;
    }
};