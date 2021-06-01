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