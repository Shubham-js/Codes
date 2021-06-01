#include<bits/stdc++.h>
using namespace std;
// 5 3 0 0 7 0 0 0 0
// 6 0 0 1 9 5 0 0 0
// 0 9 8 0 0 0 0 6 0
// 8 0 0 0 6 0 0 0 3
// 4 0 0 8 0 3 0 0 1
// 7 0 0 0 2 0 0 0 6
// 0 6 0 0 0 0 2 8 0
// 0 0 0 4 1 9 0 0 5
// 0 0 0 0 8 0 0 7 9


bool CanPlace(int sudoku[][25], int i, int j, int n, int number) {

	//check for row and column
	for (int x = 0; x < n; x++) {
		if (sudoku[x][j] == number || sudoku[i][x] == number)
			return false;
	}
	int rn = sqrt(n);
	int sx = (i / rn) * rn;
	int sy = (j / rn) * rn;

	for (int x = sx; x < sx + rn; x++) {
		for (int y = sy; y < sy + rn; y++) {
			if (sudoku[x][y] == number) {
				return false;
			}
		}
	}

	return true;
}
bool sudoku_solver(int mat[][25], int i, int j, int n)
{
	//base case
	if (i == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;

	}
	// change a row
	if (j == n)
	{
		return sudoku_solver(mat, i + 1, 0, n);
	}

	//skip prefilled places
	if (mat[i][j] != 0)
	{
		return sudoku_solver(mat, i, j + 1, n);
	}

	//check whether the element can be placed or not;
	for (int number = 1; number <= n; number++)
	{
		if (CanPlace(mat, i, j, n, number))

		{
			//Assume
			mat[i][j] = number;


			bool solvable = sudoku_solver(mat, i, j + 1, n);
			if (solvable)
			{
				return true;
			}
		}
	}

	//backtrack
	mat[i][j] = 0;
	return false;
}

int main() {
	int n;
	cin >> n;
	int mat[25][25];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> mat[i][j];
		}
	}
	// for (int i = 0; i < 9; i++)
	// {
	// 	for (int j = 0; j < 9; j++)
	// 	{
	// 		cout << mat[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	sudoku_solver(mat, 0, 0, n);
	return 0;
}