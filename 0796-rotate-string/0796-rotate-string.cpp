class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i=1;i<s.size();i++)
        {
            string sub=s.substr(i)+s.substr(0,i);
            if(sub==goal) return true;
        }
        return false;
    }
};