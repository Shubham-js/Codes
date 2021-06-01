#include<bits/stdc++.h>
using namespace std;
vector<int> primeSeive(int p[], int n)
{
	for (int i = 3; i <= n; i + 2)
	{
		p[i] = 1;

	}
	for (int i = 3; i <= n; i++)
	{
		if ((i and 1) == 1)
		{
			for (int j = i * i; j <= n; j += i)
			{
				p[j] = 0;
			}
		}
	}
	//special cases
	p[0] = p[1] = 0;
	p[2] = 1;
	vector<int> v;
	v.push_back(2);
	for (int i = 3; i < n; i += 2)
	{
		if (p[i] == 1)
		{
			v.push_back(i);

		}
	}
	for (auto x : v)
	{
		cout << x << endl;
	}
	return v ;
}
int divisor(int no , vector<int> primes)
{

	int ans = 1;
	int i = 0;
	int p = primes[0];
	while (p * p <= no)
	{
		if (no % p == 0)
		{
			int c = 0;
			while (no % p)
			{
				c++;
				no /= p;

			}
			ans = ans * (c + 1);

		}

		i++;

		primes[i];
	}
	if (no != 1)
	{
		ans = ans * 2;
	}
	return ans;
}


int main() {
	int N = 1000000;
	//cout << N << endl;
	int p[N];
	for (int i = 0; i < N; i++)
	{
		p[i] = 0;
	}
	vector<int> primes = primeSeive(p, 100);

	int t, no;
	cin >> t;

	while (t--)
	{
		cin >> no;
		cout << divisor(no, primes) << endl;
	}
	return 0;
}