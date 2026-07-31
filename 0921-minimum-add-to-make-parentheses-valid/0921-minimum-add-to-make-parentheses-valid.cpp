class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0,ans=0;

        for(char ch: s){
            if(ch=='(') balance++;
            else {
                balance--;
                if(balance<0){
                    ans++;
                    balance=0;
                }
            }
        }
        return balance+ans;
    }
};