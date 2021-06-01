#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&x)
{
	int n = x.size();
	vector<vector<int>>v;
	priority_queue<int>pq;

	for (int i = 0; i < x.size(); i++)
	{
		vector<int>day;
		pq.push(x[i]);
		int t = pq.top();
		while (!pq.empty() and  n == t)
		{
			day.push_back(t);
			pq.pop();
			n--;
			t = pq.top();
		}
		v.push_back(day);
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int>a;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}
	solve(a);
	return 0;
}