class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>answer;
        string current="(";
        generate(n,1,0,answer,1,current);
        return answer;
    }
    void generate(int n, int open, int close, vector<string> &answer, int length, string current) {
        if(length == 2*n) {
            answer.emplace_back(current);
            return;
        }
        if(open<n) {
            generate(n,open+1,close,answer,length+1,current+'(');
        }
        if(close<open) {
            generate(n,open,close+1,answer,length+1,current+')');
        }
        return;
    }
};