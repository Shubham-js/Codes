//find this question on spoj
#include<bits/stdc++.h>
using namespace std;
class graph {
	int v;
	list<pair<int, int>>*l;
public:
	graph(int v)
	{
		this->v = v;
		l = new list<pair<int, int>>[v];

	}
	void addEdge(int x, int y, int w)
	{
		l[x].push_back({y, w});
		l[y].push_back({x, w});

	}
	int dfs_helper(int node, vector<bool>&visited, vector<int>&count, int &ans) //it will return the count
	{
		visited[node] = true;
		count[node] = 1;
		for (auto nbr_pair : l[node])
		{
			int nbr = nbr_pair.first;
			int weight = nbr_pair.second;
			if (!visited[nbr])
			{
				count[node] += dfs_helper(nbr, visited, count, ans);
				int edges_on_left = count[nbr];
				int edges_on_right = v - edges_on_left;
				ans += 2 * min(edges_on_left, edges_on_right) * weight;
			}

		}
		return count[node];
	}
	int dfs()
	{
		int ans = 0;
		vector<int>count(v, 0);
		vector<bool>visited(v, false);
		dfs_helper(0, visited, count, ans);

		return ans;

	}
};
int main()
{
	int t;
	cin >> t;
	int a = 1;
	while (t--)
	{

		int n;
		cin >> n;
		graph g(n);
		int edges = n - 1;
		//given in question
		int x, y, w;

		for (int i = 0; i < edges; i++)
		{
			cin >> x >> y >> w;

			g.addEdge(x - 1, y - 1, w);
		}
		int ans = g.dfs();
		cout << "Case #" << a << ": " << ans << endl;
		a++;

	}
	return 0;
}
