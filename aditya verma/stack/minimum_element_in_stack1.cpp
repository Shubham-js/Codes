#include <bits/stdc++.h>
using namespace std;

stack<int> s;
stack<int> ss;

void minimum() {
	if (ss.size() == 0)
	{
		cout << -1 << endl;
		return;
	}
	else
	{
		cout << ss.top() << endl;
		return;
	}
}
void pop()
{
	if (s.size() == 0)
	{
		cout << -1 << endl;
		return;
	}
	int ans = s.top();
	s.pop();
	if (ss.top() == ans)
	{
		ss.pop();
	}
	cout << ans << endl;
	return;
}
void push()
{
	int n;
	cin >> n;
	s.push(n);
	if (ss.size() == 0 or ss.top() >= n)
	{
		ss.push(n);
	}
}
int main() {

	while (true)
	{
		int ch;
		switch (ch)
		{
		case 1: push(); break;
		case 2: pop(); break;
		case 3: minimum(); break;
		default: break;

		}
		if (ch > 3)
			break;

	}


}