class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int scheck[256]={0};
        int tcheck[256]={0};
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++)
        {
            if(scheck[s[i]]!=tcheck[t[i]]) return false;
            scheck[s[i]]=tcheck[t[i]]=i+1;
        }
        return true;
    }
};