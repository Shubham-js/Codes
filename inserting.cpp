#include<bits/stdc++.h>
using namespace std;
vector<int> interesting(int n, int m, vector<int>&v, int q, vector<int>&query)
{
	vector<int>p;
	for (int j = 0; j < q; j++)
	{
		int rem = -1;
		int idx = 0;
		int x = query[j];
		for (int i = 0; i < v.size(); i++)
		{

			int a = (x + v[i]) % m;


			if (a > rem)
			{
				rem = a;
				idx = i;
			}

		}
		p.push_back(idx + 1);
	}
	return p;


}

int main()
{
	int n, m;
	cin >> n >> m;
	int temp;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);

	}
	int q;
	cin >> q;
	int x;
	vector<int>query;
	for (int i = 0; i < q; i++)
	{
		cin >> x;

		query.push_back(x);


	}
	vector<int>ans = interesting(n, m, v, q, query);
	for (auto p : ans)
	{
		cout << p << " ";
	}
	return 0;
}