class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vowel;
        unordered_map<char,int>consonant;
        int maxV=0,maxC=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))vowel[s[i]]++;
            else consonant[s[i]]++;
        }
        for(auto it:vowel)
        {
            if(it.second>maxV)
            {
                maxV=it.second;
            }
        }
        for(auto it:consonant)
        {
            if(it.second>maxC)
            {
                maxC=it.second;
            }
        }
        return (maxV+maxC);
    }
};