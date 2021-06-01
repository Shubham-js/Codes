#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool canFinish(int n, vector<vector<int>>& pre) {
		list<int>*l = new list<int>[n];
		for (int i = 0; i < pre.size(); i++)
		{
			l[pre[i][1]].push_back(pre[i][0]);
		}
		vector<int>indegree(n, 0);
		for (int i = 0; i < pre.size(); i++)
		{
			int x = pre[i][0];
			indegree[x]++;
		}
		// for (int i = 0; i < n; i++)
		// {
		// 	cout << i << "--->";
		// 	for (auto node : l[i])
		// 	{
		// 		cout << node << " ";
		// 	}
		// 	cout << endl;
		// }
		// for (int i = 0; i < n; i++)
		// {
		// 	cout << indegree[i] << " ";
		// }
		// cout << endl;
		queue<int>q;
		for (int i = 0; i < n; i++)
		{
			if (indegree[i] == 0)
			{
				q.push(i);

			}
		}//we have taken all indegrees with  begining
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (auto nbr : l[node])
			{
				indegree[nbr]--;
				if (indegree[nbr] == 0)
					q.push(nbr);
			}

		}

		for (int i = 0; i < n; i++)
		{
			if (indegree[i] != 0)
			{
				return false;
			}
		}

		return true;
	}
};
int main()
{
	int n = 5;
	vector<vector<int>>pre = {{1, 4}, {2, 4}, {3, 1}, {3, 2}};
	Solution s;
	cout << s.canFinish(n, pre) << endl;
}