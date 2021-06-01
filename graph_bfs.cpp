#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph {
public:

	map<T, list<T>>l;
	void pushEdge(T x, T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void bfs(T src)
	{

		map<T, int>m;
		queue<T>q;
		q.push(src);
		m[src] = 1; //for visited vertices
		while (!q.empty())
		{
			T node = q.front();
			q.pop();
			cout << node << " ";
			for (auto nbr : l[node])
			{

				if (m[nbr] != 1) {
					q.push(nbr);
					m[nbr] = 1;
				}
			}
		}

	}



};
int main() {
	Graph<int> g;
	int v;
	cin >> v;
	int x, y;
	for (int i = 0; i < v; ++i)
	{
		cin >> x >> y;
		g.pushEdge(x, y);
	}
	int d;
	cin >> d;
	g.bfs(d);
	return 0;
}