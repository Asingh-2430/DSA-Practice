class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        // Frequency arrays for characters in 'a' to 'z'
        int freq1[26] = {0}, freq2[26] = {0};

        // Count frequencies of characters in s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int winlen = s1.length();

        // Initialize the first window in s2
        for (int i = 0; i < winlen; i++) {
            freq2[s2[i] - 'a']++;
        }

        // Check if the first window matches
        if (issame(freq1, freq2)) return true;

        // Slide the window across s2
        for (int i = winlen; i < s2.length(); i++) {
            // Add the new character to the window
            freq2[s2[i] - 'a']++;

            // Remove the character that is sliding out
            freq2[s2[i - winlen] - 'a']--;

            // Check if the updated window matches
            if (issame(freq1, freq2)) return true;
        }

        return false;
    }

private:
    bool issame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};
