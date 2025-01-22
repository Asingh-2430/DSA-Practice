class Solution {
public:
    string removeOuterParentheses(string s) {
        int size = s.length();
        int count = 0;
        string r = "";

        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                count++;
            }
            if (s[i] == ')') {
                count--;
            }
            if (s[i] == '(' && count == 1 || s[i] == ')' && count == 0) {
                continue;
            } else {
                r += s[i];
            }
        }
        return r;
    }
};
/* The best method to do this question is by doing on a copy.
   We will analyze the values where the first and last parentheses are
   and then consider the values accordingly.*/
