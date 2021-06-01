class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>&v) {
		int r = v.size();
		int c = v[0].size();
		int count = 0, row_st = 0, l = 0;
		vector<int>spiral(r * c, 0);
		int p = 0;
		int val = r * c;
		while (count < val)
		{
			//for upper row
			for (int i = l; i < c; i++)
			{
				spiral[p++] = v[row_st][i];
				count++;
			}
			//for last column
			for (int i = row_st + 1; i < r; i++)
			{
				spiral[p++] = v[i][c - 1];
				count++;
			}
			//last row
			for (int i = c - 2; i >= l; i--)
			{
				spiral[p++] = v[r - 1][i];
				count++;
			}
			//leftest column
			for (int i = r - 2; i > row_st; i++)
			{
				spiral[p++] = v[i][l];
				count++;
			}
			row_st++;
			l++;
			r--;
			c--;

		}
		for (int i = 0; i < spiral.size(); i++)
		{
			cout << spiral[i] << endl;
		}
		return {};
	}
};