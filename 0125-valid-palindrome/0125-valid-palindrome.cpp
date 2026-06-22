class Solution {
public:
    bool isPalindrome(string s) {
        bool check=false;
        string news="";
        for(char c:s)
        {
            if(isalnum(c))
            {
                news+=tolower(c);
            }
        }
        if(news.length()==1)
        {
            return true;
        }
        check=checkPalindrome(news,0);
        return check;
    }
    bool checkPalindrome(string &s,int i)
    {
        if (i>=(s.length())/2)
        {
            return true;
        }
        if(s[i]!=s[s.length()-1-i])
        {
            return false;
        }
       return checkPalindrome(s,i+1);
    }
};