class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] > 0) {
                continue;
            } else {
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] >= 0 && j % 2 == 1) { // Ensure j is at an odd index to maintain the alternating pattern
                        swap(nums[i], nums[j]);
                        break; // Exit inner loop after swapping
                    }
                }
            }
        }
        return nums; // Return after processing all elements
    }
};
