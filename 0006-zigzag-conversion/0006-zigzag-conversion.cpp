class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> store(numRows, vector<char>(s.size(), ' '));
        if (numRows==1 || s.size()<=numRows) return s;
        int x=numRows-1;
        int row=0;
        int column=0;
        store[0][0]=s[0];
        for(int i=1;i<s.size();i++) {
            char ch=s[i];
            if (row==x) {
                row-=1;
                column+=1;
            }
            else if (column%x == 0) row+=1;

            else {
                row-=1;
                column+=1;
            }
            store[row][column]=ch;
        }
        string ans="";
        int rowlimit=store.size();
        int columnlimit=store[0].size();
        for(int i=0;i<rowlimit;i++) {
            for(int j=0;j<columnlimit;j++) {
                if(store[i][j]==' ') continue;
                ans+=store[i][j];
            }
        }
        return ans;
    }
};