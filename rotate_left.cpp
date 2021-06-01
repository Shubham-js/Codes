#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	queue<int>q;
	int tmp;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		q.push(tmp);
	}
	k = k % n;
	while (k--)
	{
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
}