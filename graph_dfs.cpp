#include<bits/stdc++.h>
using namespace std;
//template<typename T>
class Graph {
public:
	map<int, list<int>>l;
	void addEdge(int x, int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
//recursive function
	void dfs_helper(int src, map<int, bool>&visited)
	{
		cout << src << " ";
		visited[src] = true;
		for (auto nbr : l[src])
		{
			if (!visited[nbr])
			{


				dfs_helper(nbr, visited);
			}
		}

	}


//starts the dfs search
	void dfs(int src)
	{
		map<int, bool>visited;
		for (auto x : l)
		{
			int node = x.first;
			visited[node] = false;

		}
		dfs_helper(src, visited);

	}

};
int main() {
	Graph g;
	int vertex, edges;
	cin >> vertex >> edges;
	int u, v;
	for (int i = 0; i < edges; ++i)
	{
		cin >> u >> v;
		g.addEdge(u, v);
	}
	int s;
	cin >> s;
	g.dfs(s);





	return 0;
}