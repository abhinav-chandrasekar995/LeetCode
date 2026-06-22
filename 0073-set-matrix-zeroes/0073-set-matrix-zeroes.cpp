class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>track;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (matrix[i][j]==0)
                {
                    track.emplace_back(i,j);
                }
            }
        }
        for(int i=0;i<track.size();i++)
        {
           int row_number=track[i].first;
           int column_number=track[i].second;
           for(int j=0;j<m;j++)
           {
            matrix[j][column_number]=0;
           }
           for(int j=0;j<n;j++)
           {
            matrix[row_number][j]=0;    
           }
        }
        return;
    }
};