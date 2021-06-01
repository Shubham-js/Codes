#include <bits/stdc++.h>
using namespace std;


void reveseSpiralPrinting(int ar[][100], int row, int col) {
}


int main() {
	int row, col;
	cin >> row >> col;
	int ar[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> ar[i][j];
		}
	}
	int row_start = 0, col_start = 0, row_end = row - 1, col_end = col - 1;
	while (row_start <= row_end && col_start <= col_end) {
		for (int i = row_start; i <= row_end; i++)
		{
			cout << ar[i][col_start] << ", ";
		}
		col_start++;
		for (int i = col_start; i <= col_end; ++i)
		{
			cout << ar[row_end][i] << ", ";
		}
		row_end--;
		if (row_end > row_start) {
			for (int i = row_end ; i >= row_start ; i--)
			{
				cout << ar[i][col_end] << ", ";
			}
			col_end--;
		}
		if (col_end > col_start) {
			for (int i = col_end; i >= col_start; i--)
			{
				cout << ar[row_start][i] << ", ";
			}
			row_start++;
		}
	}
	cout << "END" << endl;
	return 0;
}