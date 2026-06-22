class Solution {
public:
    string removeDuplicateLetters(string s) {
        int size = s.length(), top = -1;
        char stack[size];

        for (int i = 0; i < size; i++) {
        
            if (npstack(top, stack, s[i]) == 0) {
                continue;
            }

            
            while (top >= 0 && s[i] < stack[top] && plstring(i, size, stack[top], s) != 0) {
                top--;
            }

            
            stack[++top] = s[i];
        }

        
        string result;
        for (int i = 0; i <= top; i++) {
            result +=stack[i];
        }
        return result;
    }

    int npstack(int top, char stack[], char ch) {
        for (int i = 0; i <= top; i++) {
            if (ch == stack[i]) {
                return 0; 
            }
        }
        return 1; 
    }

    int plstring(int i, int size, char ch, string s) {
        for (int j = i + 1; j < size; j++) {
            if (ch == s[j]) {
                return 1; 
            }
        }
        return 0; 
    }
};