class Solution {
public:
    int myAtoi(string s) {
        int size1 = s.length();
        int i = 0;
        
        // Skip leading whitespaces
        while (i < size1 && s[i] == ' ') {
            i++;
        }
        
        // Handle optional sign
        bool isNegative = false;
        if (i < size1 && (s[i] == '+' || s[i] == '-')) {
            isNegative = (s[i] == '-');
            i++;
        }
        
        // Convert digits to integer
        int result = 0;
        while (i < size1 && isdigit(s[i])) {
            int digit = s[i] - '0';
            // Check for overflow before multiplying by 10
            if (result > (INT_MAX - digit) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            result = result * 10 + digit;
            i++;
        }
        
        return isNegative ? -result : result;
    }
};
