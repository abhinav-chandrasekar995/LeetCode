class Solution {
public:
    bool isAnagram(string s, string t) {
        int check[256]={0};
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++)
        {
            check[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            check[t[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(check[i]!=0) return false;
        }
        return true;
    }
};