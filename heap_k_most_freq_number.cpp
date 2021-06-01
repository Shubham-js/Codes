#include<iostream>
#include<algorithm>
#include <queue>
using namespace std;
class compare {
public:
	bool operator()(pair<int, int>p, pair<int, int>q)
	{
		if (p.second == q.second) //second is frequency and first is value
		{
			return p < q;
		}
		return p.second > q.second;

	}
};
int main() {
	int t;
	cin >> t;
	while (t--)
	{

		int n, k;
		cin >> n >> k;
		priority_queue<pair<int, int>, vector<pair<int, int>>, compare>pq;
		int a[100005] = {0};

		int temp;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			a[temp]++;
			pr.push(make_pair(temp, a[temp]));
			if (i < k)
			{
				int x = i;
				while (x--)
				{
					cout << pq.top();

				}
			}
		}


	}


	return 0;
}