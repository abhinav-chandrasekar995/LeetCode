class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string answer="";
        for(int i=0;i<words.size();i++)
        {
            int sum=0;
            for(int j=0;j<words[i].size();j++)
            {
                sum+=weights[words[i][j]-97];
            }
            sum=sum%26;
            answer+=char(122-sum);
        }
        return answer;
    }
};