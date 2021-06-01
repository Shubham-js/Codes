#include<bits/stdc++.h>
using namespace std;
class task {
public:
	int cool;
	int qty;
	task()
	{

	}
	task(int c, int q)
	{
		cool = c;
		qty = q;
	}
};
class comparator {
public:
	bool operator()(task a, task b)
	{
		if (a.cool == b.cool)
		{
			return a.qty < b.qty;
		}
		return a.cool > b.cool;
	}
};
class Solution {
public:
	int leastInterval(vector<char>& tasks, int n) {

		priority_queue<task, vector<task>, comparator>pq;
		vector<int>v(26, 0);
		for (int i = 0; i < tasks.size(); i++)
		{
			v[tasks[i] - 'A']++;
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > 0)
			{
				task t(0, v[i]);
				pq.push(t);
			}
		}
		while (!pq.empty())
		{
			cout << pq.top().qty << endl;
			pq.pop();
		}
	}
};
int main()
{
	Solution s;
	vector<char>v = {'A', 'A', 'A', 'A', 'B', 'B', 'B'};
	int n = 2;
	cout << s.leastInterval(v, n) << endl;
	return 0;
}