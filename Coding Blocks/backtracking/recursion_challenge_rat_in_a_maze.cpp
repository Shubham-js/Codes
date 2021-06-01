#include<bits/stdc++.h>
using namespace std;
bool rat_in_a_maze(char maze[][1000], int soln[][1000], int n, int m, int i, int j)
{
	//base case
	if (i == n and j == m)
	{
		soln[i][j] = 1;
		return true;
	}
	if (i > n or j > m)
	{
		return false;
	}
	if (maze[i][j] == 'X')
	{
		return false;
	}
	soln[i][j] = 1;
	//recursive case
	bool r = rat_in_a_maze(maze, soln, n, m, i, j + 1);
	bool d = rat_in_a_maze(maze, soln, n, m, i + 1, j);
	soln[i][j] = 0;
	// check is path exist or not
	if (r or d)
	{
		return true;
	}
	return false;


}
int main() {
	char maze[1000][1000];
	int soln[1000][1000] = {0};
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < m; ++j)
		{
			cin >> maze[i][j];
		}
	}
	if (rat_in_a_maze(maze, soln, n - 1, m - 1, 0, 0))
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; j++)
			{
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;

}