 class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths of the strings are different, they can't be anagrams.
        if (s.length() != t.length()) {
            return false;
        }
        
        // Create a frequency count vector for 26 letters of the alphabet.
        vector<int> count(26, 0);
        
        // Traverse both strings, incrementing count for characters in `s`
        // and decrementing count for characters in `t`.
        for (int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        // If the frequency count is zero for all characters, the strings are anagrams.
        for (int i = 0; i < 26; ++i) {
            if (count[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
