#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int row = 0, col = matrix[0].size() - 1;

		while (row < matrix.size() && col >= 0) {

			if (target == matrix[row][col])
				return true;

			target > matrix[row][col] ? row++ : col--;
		}

		return false;
	}
};

int main() {

	Solution s;
	int t = 5;
	vector<vector<int>>v = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
	cout << s.searchMatrix(v, t);

	return 0;
}