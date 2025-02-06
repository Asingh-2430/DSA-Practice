class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a vector of pairs to store numbers and their original indices
        vector<pair<int, int>> numsindex;

        for (int i = 0; i < nums.size(); i++) {
            numsindex.push_back({nums[i], i}); // Correctly create a pair
        }

        // Sort the vector based on the numbers (pair.first)
        sort(numsindex.begin(), numsindex.end());

        // Two-pointer approach
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int sum = numsindex[low].first + numsindex[high].first;
            if (sum == target) {
                // Return the original indices of the two numbers
                return {numsindex[low].second, numsindex[high].second};
            } else if (sum > target) {
                high--; // Decrease high pointer
            } else {
                low++; // Increase low pointer
            }
        }

        // Return an empty vector if no solution is found
        return {};
    }
};
