class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        // Check all possible rotations
        for (int i = 0; i < s.length(); i++) {
            bool isMatch = true;
            for (int j = 0; j < s.length(); j++) {
                // Compare each character of s with rotated goal
                if (s[j] != goal[(i + j) % s.length()]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) {
                return true;
            }
        }
        return false;
    }
};

