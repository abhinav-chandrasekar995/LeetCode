class Solution {
public:
    int balancedStringSplit(string s) {
        int result=0;
        int traverse=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') traverse++;
            else traverse--;
            if(traverse==0)result++;
        }
        return result;
    }
};