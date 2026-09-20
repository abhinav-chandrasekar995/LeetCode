class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string ans="";
        if(rows==1) return encodedText;
        int n = encodedText.size();
        int columns = n/rows;
        vector<vector<char>> matrix(rows, vector<char>(columns,'\0'));
        int extract=0;

        for(int i=0;i<rows;i++) {
            for(int j=0;j<columns;j++) {
                matrix[i][j]=encodedText[extract++];
            }
        }

        int i=0,j=0;
        int reference_col=0;
        while (reference_col<columns) {
            if(i==rows || j==columns) {
                reference_col++;
                i=0;
                j=reference_col;
            }
            else {
                ans+=matrix[i++][j++];
            }
        }
        int x=ans.size()-1;
        while(x>=0 && ans[x]==' ') x--;
        return ans.substr(0,x+1);
    }
};