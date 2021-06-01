#include<bits/stdc++.h>
using namespace std;
class Graph {

public:
	list<int>*l;

	Graph()
	{
		l = new list<int>[1000];
	}
	~Graph() {

	}
	void addEdge(int u, int v)
	{
		l[u].push_back(v);
		l[v].push_back(u);

	}

	void shortest_path(int s, int v)
	{
		vector<int>distance;
		for (int i = 0; i <= v; ++i)
		{
			distance.push_back(-1);
		}

		queue<int>q;
		q.push(s);
		distance[s] = 0;

		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (auto nbr : l[node])
			{
				if (distance[nbr] == -1)
				{
					distance[nbr] = distance[node] + 6;
					q.push(nbr);
				}
			}

		}

		for (int i = 1; i <= v; i++)
		{

			if (i != s)
				cout << distance[i] << " ";

		}
		cout << endl;
	}
};
int main() {

	int t, v, e, x, y, s;
	cin >> t;

	while (t--)
	{

		cin >> v >> e;
		Graph g;

		for (int i = 1; i <= e ; ++i)
		{
			cin >> x >> y;
			g.addEdge(x, y);
			//cout << x << " " << y << endl;
		}
		cin >> s;

		g.shortest_path(s, v);


	}
	return 0;
}