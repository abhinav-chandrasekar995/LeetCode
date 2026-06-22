class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++)
        {
            vector<int>sub;
            int ans=1;
            sub.emplace_back(ans);
            for(int j=1;j<i;j++)
            {
                ans=(ans*(i-j))/j;
                sub.emplace_back(ans);
            }
            result.emplace_back(sub);
        }
        return result;
    }
};