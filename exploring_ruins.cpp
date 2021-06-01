#include <bits/stdc++.h>
using namespace std;
int main() {
	char ch[50];
	cin >> ch;
	int n = strlen(ch);
	if (ch[0] == '?')
	{
		if (ch[1] == 'a')
		{
			ch[0] = 'b';
		}
		else if (ch[1] == 'b')
		{
			ch[0] = 'a';
		}
		else
		{
			ch[0] = 'a';
		}
	}
	for (int i = 1; i < n - 1; ++i)
	{
		if (ch[i] == '?')
		{
			if (ch[i - 1] == 'a' or ch[i + 1] == 'a')
			{
				ch[i] = 'b';
			} else
			{
				ch[i] = 'a';
			}
		}
	}
	if (ch[n - 1] == '?')
	{
		if (ch[n - 2] == 'a')
		{
			ch[n - 1] = 'b';
		}
		else
		{
			ch[n - 1] = 'a';
		}
	}
	cout << ch << endl;
}