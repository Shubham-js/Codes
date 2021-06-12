/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
using namespace std;
vector<int>x = {1, 0, 0, -1};
vector<int>y = {0, 1, -1, 0};
int calculate(vector<vector<int>>&v, int i, int j, vector<vector<int>>&visited)
{
	visited[i][j] = 1;
	if (v[i][j] == 9)
	{
		return 0;
	}
	if (i == v.size() or j == v[0].size())
	{
		return INT_MAX;
	}
	cout << i << " " << j << endl;
	int a = INT_MAX, b = INT_MAX, c = INT_MAX, d = INT_MAX;
	if (i < v.size() - 1 and  i >= 0 and j >= 0 and j < v[i].size() and v[i + 1][j] != 0 and visited[i + 1][j] != 1) {
		a = calculate(v, i + 1, j, visited);
	}
	if (j < v[0].size() - 1 and j and i >= 0 and i < v.size() and v[i][j + 1] != 0 and visited[i][j + 1] != 1) {
		b = calculate(v, i, j + 1, visited);
	}
	if (i > 0 and j >= 0 and j < v[i].size() and v[i - 1][j] != 0 and visited[i - 1][j] != 1) {
		c = calculate(v, i - 1, j, visited);
	}
	if (j > 0 and i >= 0 and i < v.size() and v[i][j - 1] != 0 and visited[i][j - 1] != 1) {
		d = calculate(v, i, j - 1, visited);
	}
	visited[i][j] = 0;

	return min(a, min(b, min(c, d))) + 1;
}
int main()
{
	vector<vector<int>>v = {{1, 1, 0}, {1, 1, 0}, {0, 9, 1}};
	vector<vector<int>>visited(v.size(), vector<int>(v[0].size(), 0));
	cout << calculate(v, 0, 0, visited) << endl;
	return 0;
}