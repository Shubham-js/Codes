#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph {
public:

	map<T, list<T>>l;
	void addEdge(T x, T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);

	}
	void dfs_helper(T Node, map<T, bool>&visited)
	{
		cout << Node << " ";
		visited[Node] = true;
		for (auto nbr : l[Node])
		{
			if (!visited[nbr])
			{
				dfs_helper(nbr, visited);
			}
		}
	}
	void dfs()
	{
		map<T, bool>visited;
		//decalred all nodes as not visited first
		for (auto x : l)
		{
			T Node = x.first;
			visited[Node] = false;
		}
		int c = 1;
		for (auto x : l)
		{
			T Node = x.first;
			if (!visited[Node]) {
				cout << "Component " << c << " --> ";

				dfs_helper(Node, visited);
				c++;
				cout << endl;
			}
		}
	}
};
int main(int argc, char const *argv[])
{
	Graph<int>g;
	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(3, 2);
	g.addEdge(2, 1);
	g.addEdge(0, 4);
	g.addEdge(5, 6);
	g.addEdge(6, 7);
	g.addEdge(8, 8);
	g.dfs();

	return 0;
}