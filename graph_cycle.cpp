#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool cycle_helper(vector<vector<int>>&v, int node, int*visited, int parent)
	{
		visited[node] = true;
		for (auto nbr : v[node])
		{
			if (!visited[nbr])
			{
				bool cycle_hai = cycle_helper(v, nbr, visited, node);
				if (cycle_hai)
				{
					return true;
				}
			}
			else if (nbr != parent)
			{
				return true;
			}
		}
		return false;
	}
	bool iscycle(vector<vector<int>>& v) {
		bool *visited = new bool[v.size()];
		for (int i = 0; i < v.size(); ++i)
		{
			visited[i] = false;
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (!visited[i]) {
				bool x = cycle_helper(v, i, visited, i);
				if (x) {
					return true;
				}
			}
		}
		return false;

	}
};
int main() {
	vector<vector<int>>v = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};
	Solution s;
	if (s.iscycle(v))
	{
		cout << "cycle exists" << endl;
	}
	else
	{
		cout << "cycle doesnot exists" << endl;
	}
	return 0;

}