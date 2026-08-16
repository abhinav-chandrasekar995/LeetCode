class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>answer;
        string combos[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string build="";
        recurse(0,digits,build,combos,answer);
        return answer;
    }
    void recurse(int i, string digits, string build, string combos[], vector<string>& answer) {
        if (i==digits.size()) {
        answer.emplace_back(build);
        return;
       }

       int index=digits[i]-'0';

       for(int idx=0;idx<combos[index].size();idx++) {
        recurse(i+1,digits,build+combos[index][idx],combos,answer);
       }
    }
};