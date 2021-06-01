#include <bits/stdc++.h>
using namespace std;
bool ratinmaze(char maze[10][10], int soln[][10], int i, int  j, int  m, int n)
{
	//base case
	if (i == m and j == n)
	{
		soln[i][j] = 1;


		for (int i = 0; i <= m; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}
	if (i > m or j > n)
	{
		return false;
	}
	if (maze[i][j] == 'X')
	{
		return false;
	}
	soln[i][j] = 1;
	//recursive case
	bool r = ratinmaze(maze, soln, i, j + 1, m, n);
	bool d = ratinmaze(maze, soln, i + 1, j, m, n);
	//backtrack
	soln[i][j] = 0;
	// check is path exist or not
	if (r or d)
	{
		return true;
	}
	return false;
}


int main() {
	char maze[][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int soln[10][10] = {0};
	int m = 4, n = 4;
	bool ans = ratinmaze(maze, soln, 0, 0, m - 1, n - 1);
	if (ans == false)
	{
		cout << "Path is not found";
	}

	return 0;

}