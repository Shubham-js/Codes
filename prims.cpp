#include<iostream>
#include <queue>
#include <algorithm>
using namespace std;
class Graph {
	//we will create adjacency list since no sorting is required;
	vector<pair<int, int>>*l;
	int v;
//pair is used to denote the edge at which it is coming and weight
public:
	Graph(int v)
	{
		this->v = v;
		l = new vector<pair<int, int>>[v];
	}
	void addEdge(int x, int y, int w)
	{
		l[x].push_back({y, w});
		l[y].push_back({x, w});
	}
	int prims_MST()
	{
		priority_queue < pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>>q;
		bool *visited = new bool[v] {0};
		int ans = 0;
		q.push({0, 0}); //first is weight and second is incoming edge
		while (!q.empty())
		{
			auto node = q.top();
			q.pop();
			int to = node.second;
			int weight = node.first;
			if (!visited[to])
			{
				visited[to] = 1;
				ans += weight;
				for (auto x : l[to])
				{
					if (!visited[x.first])
					{
						q.push({x.second, x.first});
					}
				}
			}
		}
		return ans;
	}

};
int main() {
	int v, e;
	cin >> v >> e;
	Graph g(v);
	int x, y, w;
	for (int i = 0; i < e; ++i)
	{
		cin >> x >> y >> w;
		g.addEdge(x , y , w);
	}
	cout << g.prims_MST() << endl;


	return 0;
}