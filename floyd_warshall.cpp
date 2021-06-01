#include<bits/stdc++.h>
using namespace std;
class Graph {
	int**l;
	//Double Dimnesion array Taken beacuse we will need to calculate all distnces;
public:
	int v;
	Graph(int v)
	{
		this->v = v;
		v += 1;
		l = new int*[v + 1];
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
			{
				if (i == j)
				{
					l[i][j] = 0;
				}
				else
					l[i][j] = INT_MAX;
			}
		}



	}
	void addEdge(int x, int y, int w)
	{
		l[x - 1][y - 1] = w;

	}
	//now we will calculate the All Pair Shortedt Path for the matrix
	void floyd_warshall()
	{
		int src = 0;
		while (src < v)
		{
			for (int i = 0; i < v; i++)
			{
				for (int j = 0; j < v; j++)
				{
					if (i != src and j != src)
					{
						if (i != j and l[i][src] != INT_MAX and l[src][j] != INT_MAX and l[i][j] > l[i][src] + l[src][j])
						{
							l[i][j] = l[i][src] + l[src][j];

						}
					}
				}
			}
			src++;
		}
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
			{
				cout << l[i][j] << " ";
			}
			cout << endl;
		}

	}

};
int main() {
	Graph g(4);
	g.addEdge(2, 1, 4);
	g.addEdge(1, 3, -3);
	g.addEdge(3, 4, 2);
	g.addEdge(3, 4, 2);
	g.addEdge(4, 2, -1);
	g.addEdge(2, 3, 3);

	g.floyd_warshall();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}