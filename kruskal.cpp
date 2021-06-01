#include<bits/stdc++.h>
using namespace std;
class DSU {
	int * parent;
	int * rank;
public:
	DSU(int v)
	{
		parent = new int[v];
		rank = new int[v];
		for (int i = 0; i < v; i++)
		{
			parent[i] = -1;
			rank[i] = 1;

		}

	}
	int find(int i)
	{
		if (parent[i] == -1)
		{
			return i;
		}
		//path compression
		return parent[i] = find(parent[i]);

	}
	void union_by_rank(int x, int y)
	{

		int s1 = find(x);
		int s2 = find(y);

		if (s1 != s2)
		{
			if (rank[s1] < rank[s2])
			{
				parent[s1] = s2;
				rank[s2] += rank[s1];

			}
			else
			{
				parent[s2] = s1;
				rank[s1] += rank[s2];

			}
		}
		return;
	}


};
class Graph {
	vector<vector<int>>edge; //to store x,y,w we coudl even use vector<pair<pair

	int v;
public:
	Graph(int v)
	{
		this->v = v;
	}
	void addEdge(int x, int y, int w)
	{
		edge.push_back({w, x, y}); //inserting vector into vector
	}
	int kurskal()
	{
		DSU d(v);
		int ans = 0;
		sort(edge.begin(), edge.end());

		for (auto v : edge)
		{
			int w = v[0];
			int x = v[1];
			int y = v[2];


			if (d.find(x) != d.find(y))
			{
				d.union_by_rank(x, y);
				ans += w;
			}


		}
		return ans;

	}

};
int main()
{
	int v, e;
	cin >> v >> e;
	Graph g(v);
	int x, y, w;
	for (int i = 0; i < e; i++)
	{
		cin >> x >> y >> w;
		g.addEdge(x - 1, y - 1, w);
	}

	cout << g.kurskal() << endl;


	return 0;
}
// 4 6
// 0 1 1
// 1 3 3
// 3 2 4
// 2 0 2
// 0 3 2
// 1 2 2
