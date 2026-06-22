class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int prevcount=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                prevcount++;
            }
            else if(s[i]==')')
            {
                count=max(count,prevcount);
                prevcount--;
            }
        }
        return count;
    }
};