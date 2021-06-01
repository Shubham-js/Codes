#include<bits/stdc++.h>
using namespace std;
class Graph
{
	list<int>*l;//list of integers
	//since size is not known then so we need number of edges to define the size;
	int V;
public:
	Graph(int V)
	{
		this->V = V;
		l = new list<int>[V];
	}
	void addEdge(int x, int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	bool cycle_detection()
	{
		bool *visited = new bool[V];
		int *parent = new int[V];
		// map<int, int>parent;
		queue<int>q;
		for (int i = 0; i < V; i++)
		{

			visited[i] = false;
			parent[i] = i;
		}
		int src = 0;
		q.push(src);//src;
		visited[src] = true;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (auto nbr : l[node])
			{
				if (visited[nbr] == true and parent[node] != nbr)
				{
					return false;
				}
				else if (!visited[nbr])
				{
					q.push(nbr);
					visited[nbr] = true;
					parent[nbr] = node;

				}

			}
		}
		return true;
	}
};
int main() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(3, 2);
	g.addEdge(1, 2);
	g.addEdge(0, 3);
	cout << g.cycle_detection() << endl;
	return 0;
}