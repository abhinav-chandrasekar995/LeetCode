class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        k=k%(grid.size()*grid[0].size());
       while(k>0)
       {
       grid=shiftKtimes(grid);
       k--;
       }
       return grid;
    }
     vector<vector<int>> shiftKtimes (vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> intermediate(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==m-1 && j==n-1)
                {
                    intermediate[0][0]=grid[i][j];
                }
                else if(j==n-1 && i<m-1)
                {
                    intermediate[i+1][0]=grid[i][j];
                }
                else if(j<n-1)
                {
                    intermediate[i][j+1]=grid[i][j];
                }
                else continue;
            }
        }
        return intermediate;
     }
};