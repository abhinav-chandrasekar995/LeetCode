class Solution {
public:
    bool isValid(string s) {
        stack<char>store;
        for (char ch: s) {
            if (ch == '(' || ch == '{' || ch == '[') store.push(ch);
            else if ((ch == ')' || ch == '}' || ch == ']') && store.empty()) return false;
            else if(ch == ')' && store.top()=='(') {
                store.pop();
            }
            else if(ch == ']' && store.top()=='[') {
                store.pop();
            }
             else if(ch == '}' && store.top()=='{') {
                store.pop();
            }
            else return false;
        }
        return store.empty();
    }
};