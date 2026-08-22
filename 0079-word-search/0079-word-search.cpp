class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=word.size();
        int x=board.size();
        int y=board[0].size();
        for(int i=0;i<x;i++) {
            for(int j=0;j<y;j++) {
                if(recurse(board,word,i,j,0,n)) return true;
            }
        }
        return false;
    }
    bool recurse(vector<vector<char>>& board, string word, int i, int j, int index, int n) {
        if(index==n) return true;

        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[index]) {
            return false;
        }
        char ch=board[i][j];
        board[i][j]='.';
        bool found=recurse(board,word,i-1,j,index+1,n)||recurse(board,word,i+1,j,index+1,n)||recurse(board,word,i,j+1,index+1,n)||recurse(board,word,i,j-1,index+1,n);
        board[i][j]=ch;
        return found;
    }
};