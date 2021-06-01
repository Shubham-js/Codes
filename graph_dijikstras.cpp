#include<bits/stdc++.h>
using namespace std;
class Graph {

	map<int, list<pair<int, int>>>l;
	int v;
public:
	Graph(int v)
	{
		this->v = v;

	}
	void addEdge(int x, int y, int w)
	{
		l[x].push_back(make_pair(y, w));
		l[y].push_back(make_pair(x, w));

	}
	void bfs(int src)
	{
		map<int, bool>visited;
		map<int, int>distance;
		queue<int>q;
		for (auto node : l)
		{
			int x = node.first;
			visited[x] = false;
			distance[x] = -1;
		}
		q.push(src);
		visited[src] = true;
		distance[src] = 0;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (auto nbr : l[node])
			{
				int val = nbr.first;
				int dist = nbr.second;
				if (!visited[val])
				{
					q.push(val);
					visited[val] = true;
					distance[val] = dist + distance[node];
				}
				else
				{
					distance[val] = min(distance[val], distance[node] + dist);
				}
			}
		}
		for (auto d : distance)
		{
			if (d.second != 0)
				cout << d.second << " ";
		}

		cout << endl;

		return;
	}

};
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int v, e;
		cin >> v >> e;
		Graph g(v);
		int x, y, w;
		for (int i = 0; i < e; i++)
		{
			cin >> x >> y >> w;
			g.addEdge(x, y, w);
		}
		int val;
		cin >> val;
		g.bfs(val);
	}
	return 0;
}