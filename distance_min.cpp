#include<bits/stdc++.h>
using namespace std;
vector<int> calulate_min_cost(int a, vector<vector<int>>v, int c)
{
	vector<pair<int, int>>p;
	//1st to store min dist second to store c
	for (int i = 0; i < a + 1; i++)
	{
		p.push_back({0, -1});
	}
	for (int i = 0; i < v.size(); i++)
	{

		int src = v[i][0];

		int dst = v[i][1];

		int cost = v[i][2];
		int c_prev = p[src].second;

		if (c_prev < c)
		{
			int new_cost = p[src].first + cost;
			int new_cc = p[dst].second + 1;
			if ( new_cost < p[dst].first or p[dst].first == 0)
			{

				p[dst] = {new_cost, new_cc};

			}
		}


	}
	vector<int>x;
	for (int i = 1; i < p.size(); i++)
	{
		x.push_back(p[i].first);
	}
	return x;

}

int main() {
	vector<vector<int>>v = {{1, 2, 100}, {2, 3, 100}, {1, 3, 500}, {1, 4, 500}, {3, 4, 200}};
	int a = 4;
	int c = 2;
	vector<int>x = calulate_min_cost(a, v, c);
	for (auto y : x)
	{
		cout << y << " ";
	}
	return 0;
}