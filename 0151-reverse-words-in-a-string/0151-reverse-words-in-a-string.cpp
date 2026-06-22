class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=s.size()-1;
        while(i>=0)
        {
            string sub="";
            int a,b=0;
            while(i>=0&&s[i]==' ') i--;
            if(i<0) break;
            a=i;
            while(a>=0&&s[a]!=' ') 
            {
                a--;
                b++;
            }
            a=a+1;
            sub=s.substr(a,b);
            if(!ans.empty())
            ans+=' ';
            ans+=sub;
            i=a-1;
        }
        return ans;
    }
};