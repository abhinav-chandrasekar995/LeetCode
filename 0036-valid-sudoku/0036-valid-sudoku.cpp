class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(!(isValidRow(board))) return false;
        if(!(isValidColumn(board))) return false;
        if(!(isValidSubBox(board))) return false;
        return true;
    }
    bool isValidRow(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            int check[9]={0};
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                check[board[i][j]-'1']++;
            }
            for(int k=0;k<9;k++)
            {
            if(check[k]>1) return false;
            }
        }
        return true;
    }
    bool isValidColumn(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            int check[9]={0};
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.') continue;
                check[board[j][i]-'1']++;
            }
            for(int k=0;k<9;k++)
            {
            if(check[k]>1) return false;
            }
        }
        return true;
    }
    bool isValidSubBox(vector<vector<char>>& board)
    {
        for(int r=0;r<9;r+=3)
        {
            for(int c=0;c<9;c+=3)
            {
                int check[9]={0};
                for(int i=r;i<r+3;i++)
                {
                    for(int j=c;j<c+3;j++)
                    {
                        if(board[i][j]=='.') continue;
                        check[board[i][j]-'1']++;
                    }
                }
                for(int k=0;k<9;k++)
                {
                    if(check[k]>1) return false;
                }
            }
        }
        return true;
    }
};