#include<iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int count(int n, vector<int>&v, int k)
{
	map<int, int>m;
	for (int i = 0; i < v.size(); i++)
	{
		m[v[i]]++;
	}
	vector<int>freq;
	for (auto x : m)
	{
		int s = x.second;
		freq.push_back(s);

	}
	int c = 0;
	sort(freq.begin(), freq.end(), greater<int>());
	for (int i = 0; i < freq.size(); i++)
	{
		if (k > 0)
		{
			k = k - freq[i];
			c++;
		}
		else
		{
			break;
		}
	}
	return c;


}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int>v;
		int temp;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		cout << count(n, v, k) << endl;
	}

	return 0;
}