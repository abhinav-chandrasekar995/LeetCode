class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>pos={-1,-1,-1};
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            pos[s[i]-'a']=i;
            if(pos[0]>=0 && pos[1]>=0 &&pos[2]>=0)
            {
                int minpos=min(pos[0],pos[1]);
                minpos=min(pos[2],minpos);
                ans+=minpos+1;
            }
            else continue;
        }
        return ans;
    }
};