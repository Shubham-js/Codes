#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int a [m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	map<int, int>m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 or j == 0 or i = m - 1 or j = n - 1 or i == j or i + j = r - 1)
			{
				m[a[i][j]]++;
			}
		}
	}
	int qty = INT_MAX;

	for (auto x : m)
	{
		if (x.second > 3)
		{

		}
	}
}





class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

		vector<int> combinations;
		vector<vector<int>> result;
		findTargetSum(candidates, result, combinations, target, 0, 0);
		return result;

	}

	void findTargetSum(vector<int> &candidates, vector<vector<int>> &result, vector<int> &combinations, int target, int start, int sum) {

		if (sum > target) return;

		else if (sum == target) {
			result.push_back(combinations);
		}
		else {
			for (int i = start; i < candidates.size(); i++) {
				combinations.push_back(candidates[i]);
				findTargetSum(candidates, result, combinations, target, i, sum + candidates[i]);
				combinations.pop_back();
			}
			return;
		}

	}
};