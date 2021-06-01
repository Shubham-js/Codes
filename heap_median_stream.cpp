#include<bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int d;
		cin >> d;

		n--;
		priority_queue<int>max_heap;
		priority_queue<int, vector<int>, greater<int>> min_heap;
		max_heap.push(d);
		float median = d;
		cout << median << " ";
		while (n--)
		{
			cin >> d;
			if (max_heap.size() > min_heap.size())
			{
				if (d < median)
				{
					min_heap.push(max_heap.top());
					max_heap.pop();
					max_heap.push(d);
				}
				else
				{
					min_heap.push(d);
				}
				median = (min_heap.top() + max_heap.top()) / 2.0;
			}
			else if (min_heap.size() == max_heap.size())
			{
				if (d < median)
				{
					max_heap.push(d);
					median = max_heap.top();
				}
				else
				{
					min_heap.push(d);
					median = min_heap.top();
				}
			}
			else
			{
				if (d > median)
				{
					max_heap.push(min_heap.top());
					min_heap.pop();
					min_heap.push(d);
				}
				else
				{
					max_heap.push(d);
				}
				median = (min_heap.top() + max_heap.top()) / 2.0;
			}
			cout << median << " ";
		}

	}
	return 0;
}