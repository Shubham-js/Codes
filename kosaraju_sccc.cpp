#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>graph[], int i, vector<int>&visited, vector<int>&stack)
{
	visited[i] = 1;
	for (auto nbr : graph[i])
	{
		if (!visited[nbr])
		{
			dfs(graph, nbr, visited, stack);
		}
	}
	stack.push_back(i);
}
void ksrdfs(vector<int>rev_graph[], int i, vector<int>&visited)
{
	visited[i] = 1;
	cout << i << " ";
	for (auto nbr : rev_graph[i])
	{
		if (!visited[nbr])
		{
			ksrdfs(rev_graph, nbr, visited);
		}
	}

}
void solve(vector<int>graph[], vector<int>rev_graph[], int v)
{
	vector<int>visited(v, 0);
	vector<int>stack;
	for (int i = 0; i < v; i++)
	{
		if (!visited[i])
		{

			dfs(graph, i, visited, stack);
		}
	}
	//reset visited array
	for (int i = 0; i < v; i++)
	{
		visited[i] = 0;
	}
	char ch = 'A';
	for (int x = stack.size() - 1; x >= 0; x--)
	{
		int node = stack[x];

		if (!visited[node])
		{
			cout << "component " << ch << "--->" << " ";
			// there is a component begining from it
			ksrdfs(rev_graph, node, visited);
			ch++;

			cout << endl;

		}
	}


}
int main()
{
	int v, e;
	cin >> v;
	vector<int>graph[v];
	vector<int>rev_graph[v];
	cin >> e;
	int x, y;
	for (int i = 0; i < e; i++)
	{
		cin >> x >> y;
		graph[x].push_back(y);
		rev_graph[y].push_back(x);
	}
	solve(graph, rev_graph, v);



	return 0;
}