class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        recurse(0,0,board);
    }
    bool recurse (int row, int column, vector<vector<char>>& board) {
        if (row==9) return true;
        if (column==9) return recurse (row+1,0,board);

        for(char ch='1';ch<='9';ch++) {
            if(board[row][column]!='.') return recurse(row,column+1,board);
            else
            {
                if(isValid(row,column,board,ch)) {
                    board[row][column]=ch;
                    if(recurse(row,column+1,board)) {
                        return true;
                    }
                    board[row][column]='.';
                }
            }
        }
        return false;
    }

    bool isValid(int row, int column, vector<vector<char>>& board, char ch) {
        for(int i=0;i<9;i++) {
            if(board[row][i]==ch) return false;
            if(board[i][column]==ch) return false;
        }
        for(int i=((row/3*3)); i<=((row/3*3)+2); i++)
            {
                for(int j=((column/3*3)); j<=((column/3*3)+2); j++)
                {
                    if(board[i][j]==ch) return false;
                }
            }
        return true;
    }
};