#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph {

public:
	map<T, list<T>>l;

	void addEdge(T x, T y)
	{
		//since topological sort works on DAG so there would be one sided edges
		l[x].push_back(y);
	}
	void dfs_helper(T node, map<T, bool>&visited, list<T>&ordering)
	{
		visited[node] = true;

		for (auto nbr : l[node])
		{
			if (!visited[nbr])
			{
				dfs_helper(nbr, visited, ordering);
			}

		}

		ordering.push_front(node);
		return;
	}
	void dfs()
	{
		map<T, bool>visited;
		list<T>ordering;
		//first declare all as false that is all nodes are univisited;
		for (auto p : l)
		{
			T Node = p.first;

			visited[Node] = false;
		}
		for (auto p : l)
		{
			T Node = p.first;
			if (!visited[Node])
			{
				dfs_helper(Node, visited, ordering);

			}
		}
		for (auto i : ordering)
		{
			cout << i << endl;
		}
		return;
	}
};
int main()
{
	Graph<string>g;
	g.addEdge("Python", "Data Processing");
	g.addEdge("Python", "PyTorch");
	g.addEdge("Python", "ML");
	g.addEdge("DataPreProcessing", "ML");
	g.addEdge("PyTorch", "DL");
	g.addEdge("ML", "DL");
	g.addEdge("DL", "FR");
	g.addEdge("DataSet", "FR");
	g.dfs();


	return 0;
}