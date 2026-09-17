class Solution {
public:
    string decodeString(string s) {
        stack <int> numstack;
        stack <string> stringstack;
        int num = 0;
        for(char ch: s) {
            if(isdigit(ch)) num = num*10 + (ch-'0');
            else {
                if(ch=='[') {
                    numstack.push(num);
                    num=0;
                    string temp="";
                    temp+=ch;
                    stringstack.push(temp);
                }
                else if(ch==']') {
                    string temp="";
                    while(stringstack.empty()==false && stringstack.top()!="[") {
                        temp = stringstack.top() + temp;
                        stringstack.pop();
                    }
                    stringstack.pop();
                    int n = numstack.top();
                    numstack.pop();
                    string builder = temp;
                    for (int i=1; i<n; i++) builder += temp;
                    stringstack.push(builder);
                }
                else {
                    string temp="";
                    temp+=ch;
                    stringstack.push(temp);
                }
            }
        }
        string ans="";
        while(stringstack.empty()==false) {
            ans = stringstack.top() + ans;
            stringstack.pop();
        }
        return ans;
    }
};