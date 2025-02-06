class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle edge case

        // Sort the input array
        sort(nums.begin(), nums.end());

        int longestStreak = 1;  // Track the longest sequence
        int currentStreak = 1; // Track the current sequence length

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // Skip duplicates
                if (nums[i] == nums[i - 1] + 1) { // Check for consecutive numbers
                    currentStreak++;
                } else { // Reset the streak if numbers are not consecutive
                    longestStreak = max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }

        // Return the maximum of the last streak
        return max(longestStreak, currentStreak);
    }
};
