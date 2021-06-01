#include<bits/stdc++.h>
using namespace std;
class Graph {
	list<pair<int, int>>l;
	int v;
public:
	Graph (int v)
	{
		this->v = v;
	}
	void addEdge(int x, int y)
	{
		l.push_back(make_pair(x, y));
	}
	int find(int i, int parent[])
	{
		if (parent[i] == -1)
		{
			return i;
		}
		return find(parent[i], parent);
	}
	void union_set(int i, int j, int parent[])
	{
		int s1 = find(i, parent);
		int s2 = find(j, parent);
		if (s1 != s2)
		{
			parent[s2] = s1;
		}
	}
	bool detect_cycle()
	{
		int*parent = new int[v];
		for (int i = 0; i < v; i++)
		{
			parent[i] = -1;
		}
		for (auto p : l)
		{
			int s1 = find(p.first, parent);
			int s2 = find(p.second, parent);
			if (s1 != s2)
			{
				union_set(p.first, p.second, parent);
			}
			else
			{
				return true;
			}


		}
		delete []parent;
		return false;
	}
};
int main() {

	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	// g.addEdge(3, 0);
	cout << g.detect_cycle() << endl;
	return 0;
}