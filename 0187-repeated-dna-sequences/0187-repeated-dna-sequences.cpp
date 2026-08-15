class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>answer;
        unordered_map<string,int>umpp;
        int n=s.size();
        if(n<=9) return answer;
        int i=0;
        for(int j=0;j<n;j++){
            if((j-i) == 9) {
                string substring=s.substr(i,10);
                umpp[substring]++;
                i++;
            }
        }
        for(auto it: umpp) {
            if (it.second>1) answer.emplace_back(it.first);
        }
        return answer;
    }
};