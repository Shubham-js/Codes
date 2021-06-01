#include<bits/stdc++.h>
using namespace std;
bool prime(int x)
{	int c = 0;
	if (x == 2)
	{
		return true;
	}
	else if (x > 2) {
		for (int i = 2; i < x; i++)
		{
			if (x % i == 0)
				c++;
		}
		if (c == 0)
		{
			return true;
		}

	}
	return false;
}

int main() {
	int n;
	cin >> n;
	int a = 0; int b = 1, c = 0, p = 0;
	vector<int>v;
	for (int i = 2; i <= 20; i++)
	{
		if (prime(i))
		{
			v.push_back(i);
		}
		cout << v[i] << " ";
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			c = a + b;
			a = b;
			b = c;
			cout << a << " ";
		}
		else
		{
			cout << v[p];
			p++;




		}
	}
}