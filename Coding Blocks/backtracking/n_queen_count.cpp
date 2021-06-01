#include<bits/stdc++.h>
using namespace std;
//int c = 0;
bool isSafe(int board[][11], int i, int n, int j) {
	//check for column
	for (int row = 0; row < i; row++)
	{
		if (board[row][j] == 1)
		{
			return false;
		}

	}
	//check for left diagonal
	int x = i, y = j;
	while (x >= 0 and y >= 0)
	{
		if (board[x][y] == 1)
		{
			return false;
		}
		x--;
		y--;
	}
	//check for right diagonal
	x = i, y = j;
	while (x >= 0 and y < n)
	{
		if (board[x][y] == 1)
		{
			return false;
		}
		x--;
		y++;
	}
	//now the position is safe
	return true;


}
bool solveNQueen(int board[][11], int i, int n) {
	//base case
	if (i == n)
		//c++;
	{	//you have successfully placed all the queens and no print the board with postions
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << board[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

	}

	//recursive case
	for (int j = 0; j < n; j++) {
		if (isSafe(board, i, n, j))
		{
			board[i][j] = 1;
			bool nextQueenRakhPaye = solveNQueen(board, i + 1, n);
			if (nextQueenRakhPaye)
			{
				return true;
			}
			//means i,j is not the right position out assumption was wrong
			board[i][j] = 0; //backtrack
		}

	}

	return false;

}
int main() {
	int n;
	cin >> n;
	int board[11][11] = {0};
	solveNQueen(board, 0, n);
	//cout << c << endl;
	return 0;
}