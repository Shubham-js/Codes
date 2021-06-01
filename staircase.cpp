#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}

	}
	int find;
	cin >> find;
	int check = a[0][m - 1];

	int count = 0;
	bool flag = false;
	int i = 0, j = m - 1;
	while (i < n && j < m)
	{

		count++;

		if (check < find)
		{	i++;
			check = a[i][j];
		}
		else if (check > find) {
			j--;
			check = a[i][j];
		}
		if (check == find)
		{
			cout << "1" << endl;
			flag = true;
			break;
		}
	}
	if (flag == false)
	{
		cout << "0" << endl;
	}

	return 0;



}