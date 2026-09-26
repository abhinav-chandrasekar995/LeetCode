class Solution {
public:
    char repeatedCharacter(string s) {
        char ans = '\0';
        unordered_map <char , int> umpp;
        for (char ch: s) {
            umpp[ch]++;
            if (umpp[ch] == 2) {
                ans = ch;
                break;
            }
        }
        return ans;
    }
};