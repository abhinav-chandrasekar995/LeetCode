class Solution {
public:
    int strStr(string haystack, string needle) {
       int substrlen=needle.length();
       int strlen=haystack.length();
       for(int i=0;i<strlen;i++){
        if(needle[0]==haystack[i]){
            if (needle==haystack.substr(i,substrlen)){
                return i;
            }
        }
       }
       return -1;
    }
};