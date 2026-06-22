class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>umpp;
        bool flag=true;
        for(int i=0;i<magazine.size();i++)
        {
            umpp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            umpp[ransomNote[i]]--;
        }
        for(auto it:umpp)
        {
            if(it.second<0)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};