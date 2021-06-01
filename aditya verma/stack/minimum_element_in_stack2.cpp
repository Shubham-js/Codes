#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int minimum = 0;
int minimumelement() {
	if (s.size() == 0)
	{
		return -1;
	}
	else
	{
		return minimum;
	}
}
void push(int n)
{
	if (s.size() == 0)
	{
		s.push(n);
		minimum = n;
	}
	else
	{
		if (n >= minimum)
		{
			s.push(n);
		}
		else
		{
			s.push((2 * n) - minimum);
			minimum = n;
		}
	}
	return;
}
void pop() {
	if (s.size() == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		if (s.top() >= minimum) {
			s.pop();
		}
		else {
			minimum = (2 * minimum) - s.top();
			s.pop();
		}
	}
}
int top() {
	if (s.size() == 0)
	{
		return -1;
	}
	else
	{
		if (s.top() >= minimum)
		{
			return s.top();
		}
		else
		{
			return minimum;
		}
	}
}
int main() {

	push(5);
	push(7);
	cout << top() << endl;
	cout << minimumelement() << endl;
	pop();
	push(3);
	cout << top() << endl;
	cout << minimumelement() << endl;
	pop();






	return 0;
}