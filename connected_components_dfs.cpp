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
	void dfs()
	{
		map<int, bool>visited;
		for (auto x : l)
		{
			int node = x.first;
			visited[node] = false;

		}
		int c = 0;
		for (auto p : l)
		{
			int node = p.first;

			if (!visited[node])
			{
				cout << "Component " << c << "----> ";
				dfs_helper(node, visited);
				c++;
				cout << endl;

			}
		}

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

	g.dfs();





	return 0;
}