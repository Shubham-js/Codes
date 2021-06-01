#include<bits/stdc++.h>
using namespace std;
class Graph {
public:
	int v;
	list<int>*l;
	Graph(int v)
	{
		this->v = v;
		l = new list<int>[v];
	}
	void addEdge(int x, int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void print_graph()
	{
		for (int i = 0; i < v; i++)
		{
			cout << "Edge " << i << " -> ";
			for (int p : l[i])
			{
				cout << p << ", ";
			}
			cout << endl;
		}
	}
};
int main() {
	int v;
	int x, y;
	cin >> v;
	Graph g(v);
	for (int i = 0; i < v; ++i)
	{
		cin >> x >> y;
		g.addEdge(x, y);
	}
	g.print_graph();
	return 0;
}