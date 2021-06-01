#include<iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include<map>
using namespace std;
class Graph
{
	vector<vector<int>>edges;//edge list
public:
	void addEdge(int u, int v, int w)
	{
		edges.push_back({u, v, w});
	}
	map<int, int> BellmanFord(int v, int src)
	{
		map<int, int>dist;
		for (auto x : edges)
		{
			dist[x[0]] = INT_MAX;
			dist[x[1]] = INT_MAX;
		}
		//relaxation v-1 times
		dist[src] = 0;
		for (int i = 0; i < v - 1; i++)
		{
			for (auto edge : edges)
			{
				int u = edge[0];
				int v = edge[1];
				int w = edge[2];
				if (dist[u] != INT_MAX and dist[v] > dist[u] + w)
				{
					dist[v] = dist[u] + w;
				}
			}
		}
		//negative cycle detection in vth iteration
		for (auto edge : edges)
		{
			int u = edge[0];
			int v = edge[1];
			int w = edge[2];
			if (dist[u] != INT_MAX and dist[v] > dist[u] + w)
			{
				cout << "Negative Cycle Present" << endl;
				break;
			}
		}
		return dist;
	}
};
int main()
{

	int V, e;
	cin >> V >> e;
	int u, v, w;
	Graph g;
	for (int i = 0; i < e; i++)
	{
		cin >> u >> v >> w;
		g.addEdge(u, v, w);
	}
	int src;
	cin >> src;
	auto ans = g.BellmanFord(V, src);
	for (auto x : ans)
	{
		cout << x.first << " -->" << x.second << endl;
	}


	return 0;
}