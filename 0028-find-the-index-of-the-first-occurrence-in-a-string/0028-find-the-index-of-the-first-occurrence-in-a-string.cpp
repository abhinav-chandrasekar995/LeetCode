class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=-1;
        int needlelength=needle.length();
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
              if(haystack.substr(i,needlelength)==needle)
              {
              pos=i;
              break;
              }
            }
        }
        return pos;
    }
};