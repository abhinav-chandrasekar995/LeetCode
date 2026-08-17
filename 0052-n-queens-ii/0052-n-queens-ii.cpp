class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'x');
        for (int i=0;i<n;i++) board[i]=s;
        recurse (0,n,board,ans);
        return ans.size();
    }

    void recurse (int col, int n, vector<string>& board, vector<vector<string>>& ans) {
        if(col==n) {
            ans.emplace_back(board);
            return;
        }
        for (int row=0; row<n; row++) {
            if(safe(row,col,n,board)) {
                board[row][col]='o';
                recurse(col+1,n,board,ans);
                board[row][col]='x';
            }
            else continue;
        }
        return;
    }

    bool safe(int row, int col, int n, vector<string>& board) {
        int trow=row,tcol=col;
        while(row>=0 && col>=0) {
            if(board[row][col]=='o') return false;
            row--; col--;
        }
        row=trow;
        col=tcol;
        while (col>=0 && row<n) {
            if(board[row][col]=='o') return false;
            col--;
        }
        row=trow;
        col=tcol;
        while (row<n && col>=0) {
            if(board[row][col]=='o') return false;
            row++;col--;
        }
        return true;
    }
};