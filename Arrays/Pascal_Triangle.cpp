class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle; // Declare a 2D vector

    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1); // Create a row with (i+1) elements, all initialized to 1

        // Fill middle elements of the row
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row); // Add the row to the triangle
    }
    return triangle;
        
    }
};
