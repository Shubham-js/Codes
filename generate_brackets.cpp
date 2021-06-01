#include<bits/stdc++.h>
using namespace std;
void generate_brackets(int n, char*a, int index, int open, int close) {
	if (index == 2 * n)
	{
		a[index] = '\0';
		cout << a << endl;
		return;


	}
	if (open < n)
	{
		a[index] = '(';
		generate_brackets(n, a, index + 1, open + 1, close);
	}
	if (close < open)
	{
		a[index] = ')';
		generate_brackets(n, a, index + 1, open, close + 1);
	}
	return;
}
int main()
{
	int n;
	cin >> n;
	char a[2 * n + 5];
	generate_brackets(n, a, 0, 0, 0);
}