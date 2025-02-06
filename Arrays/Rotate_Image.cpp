class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Helper matrix to store the rotated result
        vector<vector<int>> helper(m, vector<int>(n));
        
        // Populate the helper matrix with rotated values
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                helper[j][m - 1 - i] = matrix[i][j];
            }
        }
        
        // Copy the rotated values back to the original matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = helper[i][j];
            }
        }
    }
};
