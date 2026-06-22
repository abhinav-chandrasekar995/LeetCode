class Solution {
public:
    string largestOddNumber(string num) {
        int x=num.size();
        for(int i=num.size()-1;i>=0;i--)
        {
            if( (num[i]-'0') % 2 != 0)
            break;
            else
            x--;
        }
        return num.substr(0,x);
    }
};