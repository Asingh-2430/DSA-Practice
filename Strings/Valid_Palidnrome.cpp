class Solution {
public:
    bool isPalindrome(string s) {
        // Let's use the 2-pointer approach
        int start = 0, end = s.size() - 1;
        bool condition = true;
        
        while (start < end) {
            // Skip non-alphanumeric characters
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            
            // Compare characters in lowercase
            if (tolower(s[start]) != tolower(s[end])) {
                condition = false;
                break;
            }
            
            start++;
            end--;
        }
        
        return condition;
    }
};
