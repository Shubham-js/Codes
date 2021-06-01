#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph {
	map<T, list<T>>l;
public:
	void addEdge(T x, T y)
	{
		//directed graph
		l[x].push_back(y);
	}
	void bfs()
	{
		map<T, int>indegree;
		//filling all the indegress of each node

		for (auto p : l)
		{
			T node = p.first;
			indegree[node] = 0;

			for (auto nbr : l[node])
			{
				indegree[nbr]++;
			}

		}

		queue<T>q;
		//filling the nodes which are independent
		for (auto p : indegree)
		{
			T node = p.first;
			if (indegree[node] == 0)
			{
				q.push(node);
			}
		}

		while (!q.empty())
		{
			T node = q.front();

			q.pop();
			cout << node << endl;
			for (auto nbr : l[node])
			{
				indegree[nbr]--;
				if (indegree[nbr] == 0)
				{
					q.push(nbr);
				}
			}
		}

	}
};
int main() {
	Graph<int>g;
	g.addEdge(5, 2);
	g.addEdge(5, 0);
	g.addEdge(4, 0);
	g.addEdge(4, 1);
	g.addEdge(2, 3);
	g.addEdge(3, 1);
	g.bfs();
	return 0;
}