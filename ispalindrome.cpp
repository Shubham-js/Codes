#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int i, int j)
{
	if (i < j)
	{




		if (a[i] == a[j])
		{
			return check(a, ++i, --j);
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i = 0;
	int j = n - 1;
	if (check(a, i, j))
		cout << "true" << endl;
	else
		cout << "false" << endl;


	return 0;
}