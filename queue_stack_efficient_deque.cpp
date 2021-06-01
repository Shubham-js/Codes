#include<bits/stdc++.h>
using namespace std;
class Queue {
	stack<int>s1;
	stack<int>s2;
public:
	void push(int x)
	{
		while (s1.size() != 0) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while (s2.size() != 0)
		{
			s1.push(s2.top());
			s2.pop();

		}


	}
	void pop()
	{
		s1.pop();
	}
	int top() {
		return s1.top();



	}
};
int main()
{
	int n;
	cin >> n;
	Queue q;
	for (int i = 0; i < n; i++)
	{
		q.push(i);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << q.top() << " ";
		q.pop();
	}
	return 0;
}