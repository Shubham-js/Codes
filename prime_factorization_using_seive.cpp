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

	return v ;
}
vector<int> factorize(int no , std::vector<int> primes)
{
	vector<int> factors;
	factors.clear();
	int i = 0;
	int p = primes[0];
	while (p * p <= no)
	{
		if (no % p == 0)
		{
			factors.push_back(p);
			while (no % p)
			{

				no /= p;
			}

		}
		i++;

		primes[i];
	}
	if (no != 1)
	{
		factors.push_back(no);
	}
	return factors;
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
		vector<int> factors = factorize(no, primes);
		for (auto  x : factors)
		{
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}