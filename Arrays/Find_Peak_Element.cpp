class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {  // Notice: '<' instead of '<='
            int mid = left + (right - left) / 2;

            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1; // Move to the right side
            } else {
                right = mid; // Move to the left side
            }
        }
        
        return left; // Peak index
    }
};
